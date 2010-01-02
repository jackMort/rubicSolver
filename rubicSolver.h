/**
 * rubicSolver.h
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

#ifndef _RUBIC_SOLVER_H
#define _RUBIC_SOLVER_H 1

#define CUBE_SIDES_LEN 6
#define CUBE_UP        0
#define CUBE_DOWN      1
#define CUBE_FRONT     2
#define CUBE_RIGHT     3
#define CUBE_REAR      4
#define CUBE_LEFT      5

typedef struct {
	int width;
	// 
	int ***sides;
} CUBE;

void move_cube( CUBE *cube, char direction );
void spin_cube( CUBE *cube, char direction );
void init_cube( CUBE *cube, int w );
//
void print_cube( CUBE cube );

#endif
// vim: fdm=marker ts=4 sw=4 sts=4
