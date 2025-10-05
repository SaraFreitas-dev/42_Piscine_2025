/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:36:03 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/20 23:00:52 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size -1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int	size;
	int	tab[3];
	int	i;

	size = 3;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	i = 0;
	ft_rev_int_tab(tab, size);
	printf("The array is now: ");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
*/
