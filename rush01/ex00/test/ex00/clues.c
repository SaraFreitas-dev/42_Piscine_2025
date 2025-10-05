/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:29:01 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/27 19:43:27 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_numbers(char *input);
int	grid_size(char *input);

/* Receber o input da string para int*/

int	*clues(char *input)
{
	int	*nums;
	int	i;
	int	j;
	int	count;

	count = count_numbers(input);
	nums = (int *)malloc(count * 4);
	if (!nums)
		return (NULL);
	i = 0;
	j = 0;
	while (input[i])
	{
		if (input[i] >= '1' && input[i] <= '9')
			nums[j++] = input[i] - '0';
		i++;
	}
	return (nums);
}

/* Dividir os ints para 4 pointers: top, etc.*/
int	*get_top(char *input)
{
	int	*clues_line;
	int	*top;
	int	n;
	int	i;

	n = grid_size(input);
	clues_line = clues(input);
	top = (int *)malloc(n * 4);
	if (!top)
		return (NULL);
	i = 0;
	while (i < n)
	{
		top[i] = clues_line[i];
		i++;
	}
	free(clues_line);
	return (top);
}

int	*get_bottom(char *input)
{
	int	*clues_line;
	int	*bottom;
	int	n;
	int	i;

	n = grid_size(input);
	clues_line = clues(input);
	bottom = (int *)malloc(n * 4);
	if (!bottom)
		return (NULL);
	i = 0;
	while (i < n)
	{
		bottom[i] = clues_line[n + i];
		i++;
	}
	free(clues_line);
	return (bottom);
}

int	*get_left(char *input)
{
	int	*clues_line;
	int	*left;
	int	n;
	int	i;

	n = grid_size(input);
	clues_line = clues(input);
	left = (int *)malloc(n * 4);
	if (!left)
		return (NULL);
	i = 0;
	while (i < n)
	{
		left[i] = clues_line[2 * n + i];
		i++;
	}
	free(clues_line);
	return (left);
}

int	*get_right(char *input)
{
	int	*clues_line;
	int	*right;
	int	n;
	int	i;

	n = grid_size(input);
	clues_line = clues(input);
	right = (int *)malloc(n * 4);
	if (!right)
		return (NULL);
	i = 0;
	while (i < n)
	{
		right[i] = clues_line[3 * n + i];
		i++;
	}
	free(clues_line);
	return (right);
}
