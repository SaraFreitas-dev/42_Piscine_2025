/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:41:10 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/19 23:47:01 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	int div_num;
	int mod_num;

	a = 5;
	b = 2;
	div = &div_num;
	mod = &mod_num;
	ft_div_mod(a, b, div, mod);
	printf("a is %d, b is %d, div is %d, mod is %d", a, b, *div, *mod);
	return (0);
}
*/
