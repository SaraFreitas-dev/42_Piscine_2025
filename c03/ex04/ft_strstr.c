/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:47:29 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/26 02:56:57 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] && (str[i + j] == to_find[j]))
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Hey there!";

	char	*result = ft_strstr(str, "ey");

	printf("Char str: %s\nTo_find str:'ey'\nResult: %s\n", str, result);
}
*/
