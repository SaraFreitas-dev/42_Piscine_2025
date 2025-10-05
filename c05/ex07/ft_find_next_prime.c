/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 04:42:41 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/29 19:33:46 by sarfreit         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb1;

	nb1 = 12;
	printf("Next prime after 12: %d\n", ft_find_next_prime(nb1));	
}
*/
