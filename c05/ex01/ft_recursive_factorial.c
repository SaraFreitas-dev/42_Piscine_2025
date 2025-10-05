/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:05:35 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/28 22:25:49 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	num;
	int	num2;
	int	num3;
	int	num4;

	num = 5;
	num2 = 7;
	num3 = 0;
	num4 = 1000000;
	printf("Factorial of %d is %d\n", num, ft_recursive_factorial(num));
	printf("Factorial of %d is %d\n", num2, ft_recursive_factorial(num2));
	printf("Factorial of %d is %d\n", num3, ft_recursive_factorial(num3));
	printf("Factorial of %d is %d\n", num4, ft_recursive_factorial(num3));
}
*/
