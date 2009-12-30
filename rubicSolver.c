// 000
// 000
// 000
// 222333444555
// 222333444555
// 222333444555
// 111
// 111
// 111

#include <stdio.h>
#include <stdlib.h>
#include "rubicSolver.h"

void init_cube( CUBE *cube, int w )
{
	int ***sides, i, j, y;
	sides = malloc( CUBE_SIDES_LEN * sizeof( int * ) );
	for( i = 0; i < CUBE_SIDES_LEN; i++ )
	{
		sides[i] = malloc( w * sizeof( int ) );
		for( j = 0; j < w; j++ ) {
			sides[i][j] = malloc( w * sizeof( int ) );
		}
	}
	// init cube
	for( i = 0; i < CUBE_SIDES_LEN; i++ )
	{
		for( j = 0; j < w; j++ ){
			for( y = 0; y < w; y++ ) {
				sides[i][j][y] = i;
			}
		}
	}
	// ..
	cube->width = w;
	cube->sides = sides;
}

void spin_cube( CUBE *cube, char direction )
{
	//int i, j, y;
	//int w = cube.width;

	switch( direction ) {
		case 'L'://L
			
		break;
		case 'l':// Li
		break;
	}
}

void print_cube( CUBE cube ) 
{
	int i, j, y;
	int w = cube.width;
	
	// UP
	for( i = 0; i < w; i++ )
	{
		for( j = 0; j < w; j++ )
		{
			printf( "%d", cube.sides[0][i][j] );
		}
		printf( "\n" );
	}
	// CENTER ITEMS
	for( i = 0; i < w; i++ )
	{
		for( y = 2; y < CUBE_SIDES_LEN; y++ )
		{
			for( j = 0; j < w; j++ )
			{
				printf( "%d", cube.sides[y][i][j]);
			}
		}
		printf( "\n" );
	}

	// DOWN
	for( i = 0; i < w; i++ )
	{
		for( j = 0; j < w; j++ )
		{
			printf( "%d", cube.sides[1][i][j] );
		}
		printf( "\n" );
	}
	
}
// vim: fdm=marker ts=4 sw=4 sts=4
