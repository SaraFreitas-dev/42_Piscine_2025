/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 23:36:35 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/23 23:37:21 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	upper_char[6] = "HELLO";
	char	not_upper[6] = "HeLLo";
	char	empty_str[2] = "";

	int	prt_upper = ft_str_is_uppercase(upper_char);
	int	prt_not_upper = ft_str_is_uppercase(not_upper);
	int	prt_empty = ft_str_is_uppercase(empty_str);

	printf("Uppercase string: %d\n", prt_upper);
	printf("Upper and lower case: %d\n", prt_not_upper);
	printf("Empty string: %d\n", prt_empty);
}
*/
