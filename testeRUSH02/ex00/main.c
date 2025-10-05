/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:04:54 by razevedo          #+#    #+#             */
/*   Updated: 2025/08/03 17:55:59 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "funct.h"
#include "struct_key.h"

int	handle_args(int argc, char **argv, char **number, char **data)
{
	if (argc > 3 || argc < 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 3)
	{
		*data = load(argv[1]);
		if (*data == NULL)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		*number = argv[2];
	}
	else if (argc == 2)
	{
		*data = load("numbers.dict");
		*number = argv[1];
	}
	return (1);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	main(int argc, char *argv[])
{
	char	*data;
	char	*number;
	char	**convert_to_value;
	char	*clean_number;
	t_dict	*dict;

	if (!handle_args(argc, argv, &number, &data))
		return (1);
	check_load_data(data);
	if (!(ft_str_is_numeric(number)))
	{
		write(1, "Error\n", 6);
		free(data);
		return (1);
	}
	convert_to_value = ft_split(data, ":");
	dict = ft_create_dict(convert_to_value,
			ft_count_line(convert_to_value) / 2);
	clean_number = remove_signal(number);
	convert_number(dict, clean_number);
	free(data);
	free(dict);
	free_split(convert_to_value);
	free(clean_number);
	return (0);
}
