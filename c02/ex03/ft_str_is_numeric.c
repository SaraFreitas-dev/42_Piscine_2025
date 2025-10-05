/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 23:34:27 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/23 23:34:30 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	all_nums[6] = "12345";
	char	not_all_nums[6] = "Hello1";
	char	empty_str[2] = "";

	int	is_num = ft_str_is_numeric(all_nums);
	int	not_num = ft_str_is_numeric(not_all_nums);
	int	empty = ft_str_is_numeric(empty_str);

	printf("All numbers: %d.\n", is_num);
	printf("String with numbers and letters: %d.\n", not_num);
	printf("Empty string: %d.\n", empty);
}
*/
