/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 00:42:41 by sarfreit          #+#    #+#             */
/*   Updated: 2025/08/05 00:49:40 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	dest_len = i;
	while (src[j] && ((i + 1) < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (dest_len < size)
		dest[i] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
int	main(void)
{
	char	dest[11] = "hello";
	char	src[7] = "there!";
	unsigned int	result = ft_strlcat(dest, src, 11);

	printf("%u", result);
}
*/
