/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:40:10 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/19 23:46:32 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	prt_a;
	int	prt_b;

	prt_a = 1;
	prt_b = 2;
	a = &prt_a;
	b = &prt_b;
	printf("The value of a was: %d.\n", prt_a);
	printf("The value of b was: %d.\n", prt_b);
	ft_swap(a, b);
	printf("After the swap:\n");
	printf("The value of a is: %d.\n", prt_a);
	printf("The value of b is: %d.\n", prt_b);
	return (0);
}
*/
