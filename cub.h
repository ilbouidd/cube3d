/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:20:58 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/10/31 10:29:01 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

#include "libft/libft.h"
#include "minilibx-linux/mlx.h"

typedef struct s_all
{
    int     ac;
    char    **av;
	char	**envp;
    char    **map;
    
}	t_all;

char	**read_map(char *file);
int	count_lines(char *file);
void	free_map(char **map);

#endif
