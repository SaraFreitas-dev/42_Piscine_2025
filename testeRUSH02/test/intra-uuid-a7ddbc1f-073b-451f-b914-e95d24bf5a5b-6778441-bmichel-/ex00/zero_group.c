/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_group.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmichel- <bmichel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:43:56 by bmichel-          #+#    #+#             */
/*   Updated: 2025/08/03 19:43:59 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funct.h"
#include "struct_key.h"

int	is_zero_group(char *group, int size)
{
	if ((size == 3 && group[0] == '0' && group[1] == '0' && group[2] == '0')
		|| (size == 2 && group[0] == '0' && group[1] == '0')
		|| (size == 1 && group[0] == '0'))
		return (1);
	return (0);
}

void	print_non_zero_group(t_dict *dict,
		char *group, int *non_zero, int power)
{
	if (*non_zero)
		ft_putstr(" ");
	print_group(dict, group);
	*non_zero = 1;
	if (power > 0)
		print_power(dict, power);
}

void	handle_zero_case(t_dict *dict, int non_zero)
{
	t_dict	*d;

	if (!non_zero)
	{
		d = find_dict(dict, "0", 1);
		if (d)
			ft_putstr(d->value);
	}
	ft_putstr("\n");
}
