#include "doom.h"

void	update_game(void *game_ptr)
{
	t_game	*game;

	game = game_ptr;
	update_frame(game);
	mlx_image_to_window(game->mlx, game->renderer, 0, 0);
}

static t_player	init_player()
{
	t_player	player;

	player.pos = new_vec2(5, 5);
	player.dir = new_vec2(1, 0);
	return (player);
}

void	init_game(t_game *game)
{
	game->mlx = mlx_init(SCREEN_WIDTH, SCREEN_HEIGHT, "Doom", false);
	game->player = init_player();
	game->fov = FOV;
	game->renderer = mlx_new_image(game->mlx, game->mlx->width, game->mlx->height);
	mlx_loop_hook(game->mlx, update_game, game);
}

void	destroy_game(t_game game)
{
	mlx_terminate(game.mlx);
}