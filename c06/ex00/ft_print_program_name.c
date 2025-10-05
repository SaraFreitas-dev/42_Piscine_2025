/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:49:40 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/30 17:46:48 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	argc = 0;
	while (argv[argc][j])
	{
		write(1, &argv[argc][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
