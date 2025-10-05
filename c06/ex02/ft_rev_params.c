/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:14:47 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/30 13:21:01 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	size;
	int	j;

	size = argc - 1;
	j = 0;
	while (size > 0)
	{
		j = 0;
		while (argv[size][j])
		{
			write(1, &argv[size][j], 1);
			j++;
		}
		write(1, "\n", 1);
		size--;
	}
	return (0);
}
