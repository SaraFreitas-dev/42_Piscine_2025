/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmichel- <bmichel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:49:42 by bmichel-          #+#    #+#             */
/*   Updated: 2025/08/03 19:49:43 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "funct.h"
#include "struct_key.h"

void	print_hundreds(t_dict *dict, char *group)
{
	char	buf[4];
	t_dict	*d;

	buf[0] = group[0];
	buf[1] = '\0';
	d = find_dict(dict, buf, 1);
	if (d)
		ft_putstr(d->value);
	ft_putstr(" ");
	d = find_dict(dict, "100", 3);
	if (d)
		ft_putstr(d->value);
	if (group[1] != '0' || group[2] != '0')
		ft_putstr(" ");
}

void	print_group(t_dict *dict, char *group)
{
	int	len;

	len = ft_strlen(group);
	if (len == 3 && group[0] != '0')
		print_hundreds(dict, group);
	print_tens_units(dict, group, len);
}

void	print_power(t_dict *dict, int zero_count)
{
	char	power[64];
	t_dict	*d;
	int		i;

	power[0] = '1';
	i = 0;
	while (i < zero_count)
	{
		power[i + 1] = '0';
		i++;
	}
	power[i + 1] = '\0';
	d = find_dict(dict, power, ft_strlen(power));
	if (d)
	{
		ft_putstr(" ");
		ft_putstr(d->value);
	}
}
