/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 04:08:42 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/28 01:12:20 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
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

	result = ft_strncmp(s1, s2, 3);
	result2 = ft_strncmp(s2, s3, 6);
	result3 = ft_strncmp(s2, s1, 4);
	printf("The result between abcd and abCd is: %d\n", result);
	printf("The result between abCd and abCd is: %d\n", result2);
	printf("The result between abCd and abcd is: %d\n", result3);
}
*/
