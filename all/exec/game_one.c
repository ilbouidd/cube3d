
#include "../../cub.h"

void    game_start(t_all *game)
{
    game->mlx = mlx_init();
    if (!game->mlx)
        return;
    game->interface = mlx_new_window(game->mlx, 1024, 1024, "ilygames");
	if (!game->interface)
		return ;
}