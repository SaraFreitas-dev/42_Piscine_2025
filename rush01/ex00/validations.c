/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:59:57 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/27 20:12:30 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* conta quantos predios sao visiveis por linha ou coluna*/
int	count_visible(int *line, int n)
{
	int	i;
	int	max_seen;
	int	vis;

	i = 0;
	max_seen = 0;
	vis = 0;
	while (i < n)
	{
		if (line[i] > max_seen)
		{
			max_seen = line[i];
			vis++;
		}
		i++;
	}
	return (vis);
}

/* Is_valid dividido por row e col*/
int	check_row(int **grid, int x, int num, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (grid[x][i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_col(int **grid, int y, int num, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (grid[i][y] == num)
			return (0);
		i++;
	}
	return (1);
}

int	validate_numbers(char *input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if ((i % 2 == 0) && input[i] < '1' || input[i] > '9')
		{
			return (0);
		}
		if ((i % 2 != 0) && input[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
