/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 01:12:35 by sarfreit          #+#    #+#             */
/*   Updated: 2025/08/02 01:13:56 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
	void ft_putstr(char *str)
	{
		while (*str)
		write(1, str++, 1);
	}
	t_bool ft_is_even(int nbr)
	{
		return ((EVEN(nbr)) ? TRUE : FALSE);
	}
	int main(int argc, char **argv)
	{
		(void)argv;
		if (ft_is_even(argc - 1) == TRUE)
			ft_putstr(EVEN_MSG);
		else
			ft_putstr(ODD_MSG);
		return (SUCCESS);
}
