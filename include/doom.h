#ifndef DOOM_H
#define DOOM_H

#include "MLX42.h"
#include "vector.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define PI 3.14159265359

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 512
#define FOV PI / 2

typedef struct	s_ray
{
	t_vec2	pos;
	t_vec2	dir;
}				t_ray;

typedef struct	s_player
{
	t_vec2	pos;
	t_vec2	dir;
}				t_player;

typedef struct	s_game
{
	mlx_t		*mlx;
	mlx_image_t	*renderer;
	t_player	player;
	double		fov;
}				t_game;

// game.c
void	update_game(void *game_ptr);
void	init_game(t_game *game);
void	destroy_game(t_game game);

// raycasting.c
void	update_frame(t_game *game);

#endif