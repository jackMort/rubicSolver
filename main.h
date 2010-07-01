/**
 * rubicSolver.h
 * Copyright (C) 2010  lech.twarog@gmail.com
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

#ifndef _RUBIC_SOLVER_NCURSES_H
#define _RUBIC_SOLVER_NCURSES_H 1

void cube_to_ncurses( CUBE cube, int x, int y ); 
WINDOW *create_side( int h, int w, int y, int x );

#endif
// vim: fdm=marker ts=4 sw=4 sts=4
