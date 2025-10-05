/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:50:32 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/20 00:08:43 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	prt_a;
	int	prt_b;

	prt_a = 5;
	prt_b = 3;
	printf("Before ft_ultimate_div_mod: %d, %d\n", prt_a, prt_b);
	ft_ultimate_div_mod(&prt_a, &prt_b);
	printf("After ft_ultimate_div_mod: %d, %d\n", prt_a, prt_b);
	return (0);
}
*/
