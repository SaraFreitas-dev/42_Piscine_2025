/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 00:38:19 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/24 22:44:29 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				total = (int)s1[i] - (int)s2[i];
				return (total);
			}
			if (s1[i] < s2[i])
			{
				total = (int)s1[i] - (int)s2[i];
				return (total);
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[5] = "abcd";
	char	s2[5] = "abCd";
	char	s3[5] = "abCd";
	int		result;
	int		result2;
	int		result3;
	
	result = ft_strcmp(s1, s2);
	result2 = ft_strcmp(s2, s3);
	result3 = ft_strcmp(s2, s1);
	printf("The result between abcd and abCd is: %d\n", result);
	printf("The result between abCd and abCd is: %d\n", result2);
	printf("The result between abCd and abcd is: %d\n", result3);
}
*/
