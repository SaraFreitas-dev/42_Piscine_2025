/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:45:00 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/27 20:14:46 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);

int	**make_grid(int n)
{
	int	**grid;
	int	i;
	int	j;

	grid = (int **)malloc(n * 8);
	if (!grid)
		return (NULL);
	i = 0;
	while (i < n)
	{
		grid[i] = (int *)malloc(n * 4);
		if (!grid[i])
			return (NULL);
		j = 0;
		while (j < n)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

/* Usar o free no main devido ao malloc*/

void	free_grid(int **grid, int n)
{
	int	i;

	if (!grid)
		return ;
	i = 0;
	while (i < n)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

/*only print grid!*/
void	print_grid(int **grid, int n)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			c = grid[i][j] + '0';
			ft_putchar(c);
			if (j < n - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
