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
