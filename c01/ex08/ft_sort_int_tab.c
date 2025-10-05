/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 02:33:27 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/21 02:45:38 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
void	print_array(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

int	main(void)
{
	int	tab[5];
	int	size;

	size = 5;
	tab[0] = 4;
	tab[1] = 1;
	tab[2] = 3;
	tab[3] = 2;
	tab[4] = 5;
	printf("The array was: ");
	print_array(tab, size);
	ft_sort_int_tab(tab, size);
	printf("\nThe array after the function is: ");
	print_array(tab, size);
} 
*/
