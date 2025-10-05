/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:49:17 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/29 01:38:24 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((nb == 0) && (power == 0))
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 2;
	power = 3;
	result = ft_recursive_power(nb, power);
	printf("The result from (2,3) is: %d", result);
	return (0);
}
*/
