/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 04:05:34 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/29 04:40:15 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive(int nb, int root_num)
{
	if ((root_num * root_num) > nb)
		return (0);
	if ((root_num * root_num) == nb)
		return (root_num);
	return (ft_recursive(nb, root_num + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_recursive(nb, 1));
}
/*
int	main(void)
{
	int	nb;

	nb = 49;
	printf("Result for 49: %d\n", ft_sqrt(49));
}

    Para o número 49:
    1² = 1
    2² = 4
    3² = 9
    7² = 49
*/
