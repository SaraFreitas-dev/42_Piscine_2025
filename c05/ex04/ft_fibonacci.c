/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 01:41:11 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/29 04:00:11 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}
/*
int	main(void)
{
	int	index;
	int	i;

	index = 6;
	printf("Fibonacci sequence: %d\n", ft_fibonacci(index));

	i = 0;
	while (i < 10)
	{
		printf("%d", ft_fibonacci(i));
		if(i < 9)
			printf(", ");
		i++;
	}
	printf("\n");
}
*/
