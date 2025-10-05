/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 01:23:45 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/20 02:00:26 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len ++;
	}
	return (len);
}
/*
int	main(void)
{
	char	*str;
	int		len;

	str = "abc";
	len = ft_strlen(str);
	printf("The length of the string %s is: %d.\n", str, len);
}
*/
