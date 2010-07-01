/**
 * main.c
 * Copyright (C) 2009  lech.twarog@gmail.com
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <ncurses.h>
#include "rubicSolver.h"
#include "main.h"

void usage()
{
	printf( "rubicSolver ...\n" );
}
//----

WINDOW *main_win;
CUBE cube;
struct option long_options[] = {
	{ "help", no_argument, 0, 'h' }
};

int main( int argc, char *argv[] ) 
{
	// screen resolution
	int row, col;
	int c, i;
	while( ( c = getopt_long( argc, argv, "h", long_options, &i) ) != -1 )
	{
		switch( c )
		{
			default:
				usage(); exit( 0 );
		}
	}
	
	// init ncurses
	initscr();
	start_color();
	// side colors
	init_pair( 1, COLOR_RED, COLOR_BLACK );
	
	cbreak();
	
	getmaxyx( stdscr, row, col );

	printw( "Rubic Solver ", main_win );
	refresh();
	
	init_cube( &cube, 4 );
	cube_to_ncurses( cube, 3, 3 );

	//refresh();
	getch();
	endwin();
	//..
	return 0;
}

void cube_to_ncurses( CUBE cube, int x, int y ) 
{
	int i;
	int w = cube.width;
	for( i = 0; i < w; i++ )
	{
		create_side( 1, w, y + i, x + w );
		create_side( 1, w, y + w + i, x );
		create_side( 1, w, y + w + w + i, x + w );

		create_side( 1, w, y + w + i, x + w );
		create_side( 1, w, y + w + i, x + w + w );
		create_side( 1, w, y + w + i, x + w + w + w );
	}
}

WINDOW *create_side( int h, int w, int y, int x ) 
{
	WINDOW *win;
	attron( COLOR_PAIR( 1 ) );
	
	win = newwin( h, w, y, x );	
	wborder( win, '#', '#', '#', '#', '#', '#', '#', '#' );
	wrefresh( win );
	
	attroff( COLOR_PAIR( 1 ) );

	return win;
}

// vim: fdm=marker ts=4 sts=4 sw=4
