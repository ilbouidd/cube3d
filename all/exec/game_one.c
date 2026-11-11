
#include "../../cub.h"

void    game_start(t_all *game)
{
    game->mlx = mlx_init();
    if (!game->mlx)
        return;
    game->interface = mlx_new_window(game->mlx, game->width * 64, game->height
			* 64, "ilygames");
	if (!game->interface)
		return ;
}