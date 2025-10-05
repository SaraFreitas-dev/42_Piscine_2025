/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bramalho <bramalho@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:09:41 by bramalho          #+#    #+#             */
/*   Updated: 2025/08/06 19:09:53 by bramalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/bsq.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		exec_map(NULL);
	else
	{
		while (i < argc)
		{
			exec_map(argv[i]);
			if (i + 1 < argc)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
