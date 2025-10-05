/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 23:33:39 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/23 23:33:43 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy( char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i < (int)n)
			{
				dest[i] = '\0';
				i++;
			}
			return (dest);
		}
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	int	n;
	char	dest[5];

	n = 5;
	char	src[14] = "Hello, World!";
	printf("Src string contains: %s\n", src);
	ft_strncpy(dest, src, n);
	printf("Copy made to dest is: %s\n", dest);
	return (0);
}
*/
