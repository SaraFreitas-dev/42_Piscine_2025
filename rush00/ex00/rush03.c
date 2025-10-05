/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:47:07 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/19 17:13:01 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	axis(int num, char start, char middle, char end)
{
	int	i;

	i = 0;
	while (i < num)
	{
		if (i == 0)
			ft_putchar(start);
		else if (num -1 == i)
			ft_putchar(end);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			axis(x, 'A', 'B', 'C');
		}
		else if (i == y -1)
		{
			axis(x, 'A', 'B', 'C');
		}
		else
		{
			axis(x, 'B', ' ', 'B');
		}
		i++;
	}
}
