/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 10:26:44 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/10/31 10:28:22 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub.h"

int	count_lines(char *file)
{
	int		fd;
	char	*line;
	int		lines;
	int		tmp;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	lines = 0;
	tmp = 1;
	while (tmp)
	{
		line = get_next_line(fd);
		if (!line)
			tmp = 0;
		else
		{
			lines++;
			free(line);
		}
	}
	close(fd);
	return (lines);
}

void	free_map(char **map)
{
	int	i;

	if (!map)
		return ;
	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}