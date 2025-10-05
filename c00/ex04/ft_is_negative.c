/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 03:57:54 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/18 04:24:29 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
/*
int	main(void)
{
	ft_is_negative(1);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	ft_is_negative(-1);
	write(1, "\n", 1);
	return (0);
}
*/
