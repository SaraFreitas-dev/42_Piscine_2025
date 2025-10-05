/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:53:47 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/31 01:33:20 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = malloc(ft_strlen(src) + 1);
	if (!new_str)
		return (NULL);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int	main(void)
{
	char	src[6] = "hello";
	char	*new_str = ft_strdup(src);
	printf("%s", new_str);
	free(new_str);
	new_str = NULL;
}
*/
