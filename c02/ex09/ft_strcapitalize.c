/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 23:32:35 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/28 20:45:49 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_sign(char c)
{
	if ((c >= 32 && c <= 47)
		|| (c >= 58 && c <= 64)
		|| (c >= 91 && c <= 96)
		|| (c >= 123 && c <= 126))
		return (1);
	else
		return (0);
}

int	is_lower_char(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	is_upper_char(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int	len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) && (is_lower_char(str[i]) == 1))
			str[i] -= 32;
		else if ((i != 0) && (i != (len(str) - 1))
			&& (is_upper_char(str[i]) == 1)
			&& is_sign(str[i - 1]) == 0)
			str[i] += 32;
		else if ((is_sign(str[i]) == 1) && (is_lower_char(str[i + 1]))
			&& (str[i + 1] != '\0'))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
int	main(void)
{
	char	str[17] = "ola, tudo bem?"; 
	char	str2[53] = "42palavras quarenta--e--duas; AHjjajJS cinquenta+e+um";

	printf("Before: %s %s.\n", str, str2);
	ft_strcapitalize(str);
	ft_strcapitalize(str2);
	printf("After the function: %s %s.\n", str, str2);
}
