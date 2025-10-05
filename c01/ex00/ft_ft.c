/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 00:55:51 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/19 12:26:25 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	nbr;
	char	tens;
	char	units;

	nbr = 3;
	tens = (nbr / 10) + '0';
   	units = (nbr % 10) + '0';
	ft_ft(&nbr);
	write(1, &tens, 1);
	write(1, &units, 1);
   	return (0);
}
*/
