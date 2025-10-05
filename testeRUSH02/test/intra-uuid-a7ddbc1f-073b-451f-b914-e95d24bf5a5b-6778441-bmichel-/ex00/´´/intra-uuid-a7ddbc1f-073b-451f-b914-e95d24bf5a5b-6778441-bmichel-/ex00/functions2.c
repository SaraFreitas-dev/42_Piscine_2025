/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmichel- <bmichel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:55:04 by bmichel-          #+#    #+#             */
/*   Updated: 2025/08/03 19:55:05 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "struct_key.h"
#include "funct.h"
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	signal;

	i = 0;
	signal = 1;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				signal = -signal;
		}
		else if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	if (signal == -1)
		return (0);
	return (1);
}

char	*remove_signal(char *number)
{
	char	*new_number;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_number = malloc ((sizeof (int) * ft_strlen(number)) + 1);
	while (number[i])
	{
		if (number[i] >= '0' && number[i] <= '9')
		{
			new_number[j] = number[i];
			j++;
		}
		i++;
	}
	new_number[j] = '\0';
	return (new_number);
}

int	ft_is_space(char c)
{
	return ((c == ' ') || (c >= 8 && c <= 14));
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
