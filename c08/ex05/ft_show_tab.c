/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:25:07 by sarfreit          #+#    #+#             */
/*   Updated: 2025/08/04 01:16:26 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	char	digits[10];
	int		i;

	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	i = 0;
	while (n > 0)
	{
		digits[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	while (i--)
		write(1, &digits[i], 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		if (par[i].copy)
			ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
