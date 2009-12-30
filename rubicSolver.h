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
