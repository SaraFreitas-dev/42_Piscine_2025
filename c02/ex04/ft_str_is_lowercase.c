/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 23:34:48 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/23 23:34:53 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char    all_lower[6] = "hello";
	char    not_all_lower[7] = "HeLLo1";
	char    empty_str[2] = "";

	int	prt_lower = ft_str_is_lowercase(all_lower);
	int	prt_not_lower = ft_str_is_lowercase(not_all_lower);
	int	empty = ft_str_is_lowercase(empty_str);

	printf("A lowercase string: %d.\n", prt_lower);
	printf("A string with differents chars and nums: %d.\n", prt_not_lower);
	printf("An empty string: %d.\n", empty); 
}
*/
