/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_key.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmichel- <bmichel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:17:09 by bmichel-          #+#    #+#             */
/*   Updated: 2025/08/03 10:37:22 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_KEY_H
# define STRUCT_KEY_H

typedef struct dict
{
	char	*value;
	char	*key;
	int		size;
}	t_dict;

#endif
