/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 04:42:41 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/29 19:17:17 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if ((nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	while (i * i <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	nb1;
	int	nb2;

	nb1 = 13;
	nb2 = 78;
	printf("13  is prime: %d\n",ft_is_prime(nb1));
	printf("78 is not prime: %d\n", ft_is_prime(nb2));	
}
*/
