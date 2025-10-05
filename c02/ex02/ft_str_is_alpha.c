/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 23:34:07 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/23 23:34:11 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str_char[6] = "Hello";
	char	str_space[1] = "";
	char	str_non_printable[2] = "\n";
	char	str_w_spaces[5] = "Hi U";
	
	int	prt_char = ft_str_is_alpha(str_char);
	int	prt_space = ft_str_is_alpha(str_space);
	int	prt_non_print = ft_str_is_alpha(str_non_printable);
	int     prt_spc = ft_str_is_alpha(str_w_spaces);

	printf("Char is: %d\n", prt_char);
	printf("An empty str is: %d\n", prt_space);
	printf("A non printable is: %d\n", prt_non_print);
	printf("A string with spaces is: %d\n", prt_spc);	
}
*/
