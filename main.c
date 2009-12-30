#include <stdio.h>
#include "rubicSolver.h"

CUBE cube;
int main( int argc, char *argv[] ) 
{
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


// vim: fdm=marker ts=4 sts=4 sw=4
