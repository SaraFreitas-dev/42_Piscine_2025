/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 01:36:24 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/23 23:37:21 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	printable_str[6] = "Hello";
	char	non_printable[2] = "\n";
	char	empty_str[2] = " ";

	int	prt_printable = ft_str_is_printable(printable_str);
	int	prt_non_print = ft_str_is_printable(non_printable);
	int	prt_empty = ft_str_is_printable(empty_str);

	printf("A printable string: %d.\n", prt_printable);
	printf("A non printable string: %d.\n", prt_non_print);
	printf("An empty string: %d.\n", prt_empty);
}
*/
