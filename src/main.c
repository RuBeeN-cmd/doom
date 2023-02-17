#include "doom.h"

int main(void)
{
	t_game	game;

	init_game(&game);
	mlx_loop(game.mlx);
	destroy_game(game);
	return 0;
}
