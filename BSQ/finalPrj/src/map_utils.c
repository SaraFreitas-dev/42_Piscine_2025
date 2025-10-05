/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bramalho <bramalho@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:13:16 by bramalho          #+#    #+#             */
/*   Updated: 2025/08/06 19:13:43 by bramalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	fill_square(t_map *map, t_point max)
{
	int	i;
	int	j;

	i = max.y;
	while (i > max.y - max.size)
	{
		j = max.x;
		while (j > max.x - max.size)
		{
			map->data[i][j] = map->full;
			j--;
		}
		i--;
	}
}

void	print_map(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			write(1, &map->data[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	free_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->rows)
	{
		free(map->data[i]);
		i++;
	}
	free(map->data);
}

int	parse_map(char *filename, t_map *map)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	if (!read_header(fd, map))
		return (0);
	if (!read_map(fd, map))
		return (0);
	close(fd);
	return (1);
}
