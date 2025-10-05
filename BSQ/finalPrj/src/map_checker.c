/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:07:13 by sarfreit          #+#    #+#             */
/*   Updated: 2025/08/06 20:07:16 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	read_header(int fd, t_map *map)
{
	char	buf[BUF_SIZE];
	int		i;
	int		r;

	i = 0;
	r = read(fd, &buf[i], 1);
	while (r == 1
		&& buf[i] != '\n' && i < BUF_SIZE - 1)
		r = read(fd, &buf[++i], 1);
	if (r <= 0 || i < 4)
		return (0);
	buf[i] = '\0';
	map->empty = buf[i - 3];
	map->obstacle = buf[i - 2];
	map->full = buf[i - 1];
	map->rows = ft_atoi(buf, i - 3);
	return (map->rows > 0);
}

static int	count_cols(char *line)
{
	int	i;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	return (i);
}

static int	read_map_row(char *buf, t_map *map, int row, int *i)
{
	int	col;

	map->data[row] = malloc(sizeof(char) * map->cols);
	if (!map->data[row])
		return (0);
	col = 0;
	while (buf[*i] && buf[*i] != '\n' && col < map->cols)
		map->data[row][col++] = buf[(*i)++];
	if (col != map->cols || buf[*i] != '\n')
		return (0);
	(*i)++;
	return (1);
}

int	read_map(int fd, t_map *map)
{
	char	buf[BUF_SIZE];
	int		r;
	int		i;
	int		row;

	i = 0;
	row = 0;
	r = read(fd, buf, BUF_SIZE - 1);
	if (r <= 0)
		return (0);
	buf[r] = '\0';
	map->cols = count_cols(buf);
	map->data = malloc(sizeof(char *) * map->rows);
	if (!map->data)
		return (0);
	while (row < map->rows)
	{
		if (!read_map_row(buf, map, row, &i))
			return (0);
		row++;
	}
	return (1);
}
