/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:00:00 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/27 20:10:27 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		grid_size(char *input);
int		*get_top(char *input);
int		*get_bottom(char *input);
int		*get_left(char *input);
int		*get_right(char *input);
int		solve_puzzle(int **grid, int n, int **clues);
void	print_grid(int **grid, int n);
int		**make_grid(int n);
void	free_grid(int **grid, int n);
int		validate_numbers(char *input);

int	main(int argc, char **argv)
{
	int		**grid;
	int		*clues[4];
	int		n;

	if (argc != 2 || !validate_numbers(argv[1]))
		return (write(1, "Error\n", 6), 1);
	n = grid_size(argv[1]);
	if (n < 4 || n > 9)
		return (write(1, "Error\n", 6), 1);
	grid = make_grid(n);
	clues[0] = get_top(argv[1]);
	clues[1] = get_bottom(argv[1]);
	clues[2] = get_left(argv[1]);
	clues[3] = get_right(argv[1]);
	if (!grid || !clues[0] || !clues[1] || !clues[2] || !clues[3]
		|| !solve_puzzle(grid, n, clues))
		write(1, "Error\n", 6);
	else
		print_grid(grid, n);
	free(clues[0]);
	free(clues[1]);
	free(clues[2]);
	free(clues[3]);
	free_grid(grid, n);
	return (0);
}
