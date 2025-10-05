/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:13:40 by sarfreit          #+#    #+#             */
/*   Updated: 2025/08/06 19:40:36 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

static int	min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	return (c);
}

static int	**allocate_dp(int rows, int cols)
{
	int	**dp;
	int	i;

	dp = malloc(sizeof(int *) * rows);
	if (!dp)
		return (NULL);
	i = -1;
	while (++i < rows)
	{
		dp[i] = malloc(sizeof(int) * cols);
		if (!dp[i])
			return (NULL);
	}
	return (dp);
}

static void	fill_dp(t_map *map, int **dp, t_point *max)
{
	int	i;
	int	j;

	max->size = 0;
	i = -1;
	while (++i < map->rows)
	{
		j = -1;
		while (++j < map->cols)
		{
			if (map->data[i][j] == map->obstacle)
				dp[i][j] = 0;
			else if (i == 0 || j == 0)
				dp[i][j] = 1;
			else
				dp[i][j] = 1 + min(dp[i][j - 1],
						dp[i - 1][j], dp[i - 1][j - 1]);
			if (dp[i][j] > max->size)
			{
				max->size = dp[i][j];
				max->y = i;
				max->x = j;
			}
		}
	}
}

static void	free_dp(int **dp, int rows)
{
	int	i;

	i = -1;
	while (++i < rows)
		free(dp[i]);
	free(dp);
}

int	solve_map(t_map *map, t_point *max)
{
	int	**dp;

	dp = allocate_dp(map->rows, map->cols);
	if (!dp)
		return (0);
	fill_dp(map, dp, max);
	free_dp(dp, map->rows);
	return (1);
}
