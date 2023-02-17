#include "doom.h"

t_ray	get_next_ray(t_game *game)
{
	t_ray	ray;

	ray.pos = game->player.pos;
	return (ray);
}

void	update_frame(t_game *game)
{
	unsigned int	y;
	unsigned int	x;
	t_ray			ray;

	y = 0;
	x = 0;
	while (x < game->renderer->height)
	{
		ray = get_next_ray(game);
		//((unsigned int *)(game->renderer->pixels))[x + y * game->renderer->width] = 0xff0000ff;
		x++;
	}
}