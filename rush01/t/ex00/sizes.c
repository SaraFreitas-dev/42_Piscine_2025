/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:38:02 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/27 20:15:37 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *line);
int	count_numbers(char *input);
int	grid_size(char *input);

int	ft_strlen(char *line)
{
	int	i;

	i = 0;
	while (line[i])
		i++;
	return (i);
}

/* Para usar no sizes.c, contar os numeros sem espaços*/
int	count_numbers(char *input)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] >= '1' && input[i] <= '9')
			count++;
		i++;
	}
	return (count);
}

/* Verificaçao da grid em quadrado*/
int	grid_size(char *input)
{
	int	count;

	count = count_numbers(input);
	if (count % 4 != 0)
		return (0);
	return (count / 4);
}
