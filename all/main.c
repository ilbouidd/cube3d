/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 10:05:39 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/11/12 09:29:05 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub.h"

int main(int ac, char **av,char **envp)
{
    t_all   cub;

    cub.ac = ac;
    cub.av = av;
    cub.envp = envp;
    cub.map = read_map(av[1]);
    game_start(&cub);
    mlx_loop(cub.mlx);
}