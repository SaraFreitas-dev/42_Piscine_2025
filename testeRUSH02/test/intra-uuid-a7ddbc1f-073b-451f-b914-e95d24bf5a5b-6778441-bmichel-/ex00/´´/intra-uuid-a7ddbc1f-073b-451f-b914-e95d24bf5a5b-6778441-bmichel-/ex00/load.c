/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:40:28 by razevedo          #+#    #+#             */
/*   Updated: 2025/08/03 17:29:58 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "struct_key.h"
#include "funct.h"

int	_error_file(int dict, char *buffer)
{
	if (dict < 0)
	{
		free (buffer);
		return (1);
	}
	return (0);
}

char	*load(char *dict_name)
{
	int		dict;
	int		i;
	ssize_t	bytes_read;
	char	*buffer;	
	char	byte;

	buffer = malloc(4096 + 1);
	dict = open(dict_name, O_RDONLY);
	if (_error_file(dict, buffer))
		return (0);
	i = 0;
	bytes_read = read(dict, &byte, 1);
	while (bytes_read > 0)
	{
		if (byte == '\n')
			buffer[i++] = ':';
		else if (!ft_is_space(byte))
			buffer[i++] = byte;
		bytes_read = read(dict, &byte, 1);
	}
	load_errors(buffer, dict, bytes_read);
	buffer[i] = '\0';
	close(dict);
	return (buffer);
}
