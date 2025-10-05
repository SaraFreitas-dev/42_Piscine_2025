/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bramalho <bramalho@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:10:16 by bramalho          #+#    #+#             */
/*   Updated: 2025/08/06 19:10:17 by bramalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	exec_map(char *filename)
{
	t_map	map;
	t_point	max;

	if (!parse_map(filename, &map))
	{
		print_error();
		return ;
	}
	if (solve_map(&map, &max))
		fill_square(&map, max);
	print_map(&map);
	free_map(&map);
}
