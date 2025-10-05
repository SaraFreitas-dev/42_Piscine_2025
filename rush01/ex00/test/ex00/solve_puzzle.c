/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_puzzle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:00:00 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/27 20:16:34 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row(int **grid, int x, int num, int n);
int	check_col(int **grid, int y, int num, int n);
int	count_visible(int *line, int n);

int	check_row_clues(int *row, int n, int idx, int **clues)
{
	int	reverse[9];
	int	i;

	if (count_visible(row, n) != clues[2][idx])
		return (0);
	i = 0;
	while (i < n)
	{
		reverse[i] = row[n - 1 - i];
		i++;
	}
	if (count_visible(reverse, n) != clues[3][idx])
		return (0);
	return (1);
}

int	check_col_clues(int **grid, int n, int idx, int **clues)
{
	int	column[9];
	int	reverse[9];
	int	i;

	i = 0;
	while (i < n)
	{
		column[i] = grid[i][idx];
		i++;
	}
	if (count_visible(column, n) != clues[0][idx])
		return (0);
	i = 0;
	while (i < n)
	{
		reverse[i] = column[n - 1 - i];
		i++;
	}
	if (count_visible(reverse, n) != clues[1][idx])
		return (0);
	return (1);
}

int	solve_util(int **grid, int n, int pos, int **clues)
{
	int	x;
	int	y;
	int	num;

	if (pos == n * n)
		return (1);
	x = pos / n;
	y = pos % n;
	num = 1;
	while (num <= n)
	{
		if (check_row(grid, x, num, n) && check_col(grid, y, num, n))
		{
			grid[x][y] = num;
			if ((y == n - 1 && !check_row_clues(grid[x], n, x, clues))
				|| (x == n - 1 && !check_col_clues(grid, n, y, clues)))
				grid[x][y] = 0;
			else if (solve_util(grid, n, pos + 1, clues))
				return (1);
			else
				grid[x][y] = 0;
		}
		num++;
	}
	return (0);
}

int	solve_puzzle(int **grid, int n, int **clues)
{
	return (solve_util(grid, n, 0, clues));
}
