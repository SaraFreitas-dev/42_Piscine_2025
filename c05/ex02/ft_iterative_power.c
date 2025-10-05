/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:31:05 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/29 00:47:23 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if ((nb == 0) && (power == 0))
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 2;
	power = 3;
	result = ft_iterative_power(nb, power);
	printf("2 at power of 3 is: %d", result);
}
*/
