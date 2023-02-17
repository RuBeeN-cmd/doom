#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>

typedef struct s_vec2 t_vec2;

struct s_vec2
{
	double	x;
	double	y;
};

t_vec2	new_vec2(double x, double y);

#endif