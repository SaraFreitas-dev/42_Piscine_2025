/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 23:23:25 by sarfreit          #+#    #+#             */
/*   Updated: 2025/08/03 19:53:54 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "funct.h"
#include "struct_key.h"

char	*load_errors(char *buffer, int dict, ssize_t bytes_read)
{
	if ((bytes_read == -1) || (dict == -1))
	{
		write(1, "Dict Error\n", 11);
		free(buffer);
		return (NULL);
	}
	if (!buffer)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	return (buffer);
}

char	check_load_data(char *data)
{
	if (data == (NULL))
	{
		write(1, "Failed to load file\n", 21);
		return (1);
	}
	return (0);
}
