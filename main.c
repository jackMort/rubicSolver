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
#include "rubicSolver.h"

void usage()
{
	printf( "rubicSolver ...\n" );
}
//----

CUBE cube;
struct option long_options[] = {
	{ "help", no_argument, 0, 'h' }
};

int main( int argc, char *argv[] ) 
{
	int c, i;
	while( ( c = getopt_long( argc, argv, "h", long_options, &i) ) != -1 )
	{
		switch( c )
		{
			default:
				usage(); exit( 0 );
		}
	}

	// init new cube
	init_cube( &cube, 3 );
	// print cube
	print_cube( cube );
	// spin left
	spin_cube( &cube, 'L' );
	// print cube
	print_cube( cube );

	//..
	return 0;
}
// vim: fdm=marker ts=4 sts=4 sw=4
