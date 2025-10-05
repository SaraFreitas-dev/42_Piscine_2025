/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:28:19 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/28 22:45:30 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
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
	printf("Factorial of %d is %d\n", num, ft_iterative_factorial(num));
	printf("Factorial of %d is %d\n", num2, ft_iterative_factorial(num2));
	printf("Factorial of %d is %d\n", num3, ft_iterative_factorial(num3));
	printf("Factorial of %d is %d\n", num4, ft_iterative_factorial(num4));

}
*/
