/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 01:54:12 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/23 23:37:21 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[16] = "This IS a test!";

	printf("The string was: %s.\n", str);

	char	*str_upper = ft_strupcase(str);
	printf("The string is now in uppercase: %s.\n", str_upper);
}
*/
