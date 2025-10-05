/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmichel- <bmichel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:22:20 by bmichel-          #+#    #+#             */
/*   Updated: 2025/08/03 19:51:02 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "funct.h"
#include "struct_key.h"

void	print_tens_units(t_dict *dict, char *group, int len);

t_dict	*ft_create_dict(char **str, int size)
{
	t_dict	*dict;
	int		i;

	dict = malloc(sizeof(t_dict) * (size + 1));
	if (!dict)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dict[i].key = str[i * 2];
		dict[i].value = str[i * 2 + 1];
		dict[i].size = ft_strlen(str[i * 2]);
		i++;
	}
	dict[size].key = NULL;
	dict[size].value = NULL;
	dict[size].size = 0;
	return (dict);
}

t_dict	*find_dict(t_dict *dict, char *key, int size)
{
	int	i;

	i = 0;
	while (dict[i].key)
	{
		if (ft_strcmp(dict[i].key, key) == 0 && dict[i].size == size)
			return (&dict[i]);
		i++;
	}
	return (NULL);
}

void	init_conversion(char *num, int *params)
{
	params[0] = ft_strlen(num);
	params[1] = params[0] % 3;
	params[2] = params[0] / 3;
	params[3] = params[2] + (params[1] > 0);
	params[4] = 0;
}

void	extract_group(char *num, char *group, int *idx, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		group[j] = num[*idx];
		(*idx)++;
		j++;
	}
	group[size] = '\0';
}

void	convert_number(t_dict *dict, char *num)
{
	int		params[5];
	int		idx;
	int		i;
	int		size;
	char	group[4];

	i = 0;
	idx = 0;
	init_conversion(num, params);
	while (i < params[3])
	{
		if (i == 0 && params[1])
			size = params[1];
		else
			size = 3;
		extract_group(num, group, &idx, size);
		if (is_zero_group (group, size))
		{
			i++;
			continue ;
		}
		print_non_zero_group(dict, group, &params[4], (params[3] - i - 1) * 3);
		i++;
	}
	handle_zero_case(dict, params[4]);
}
