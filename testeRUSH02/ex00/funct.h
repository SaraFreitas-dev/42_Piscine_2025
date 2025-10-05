/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmichel- <bmichel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:30:14 by bmichel-          #+#    #+#             */
/*   Updated: 2025/08/03 17:57:58 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCT_H
# define FUNCT_H

# include "struct_key.h"
# include <fcntl.h>
# include <stdlib.h>

int		ft_is_space(char c);
int		ft_str_is_printable(char *str);
int		ft_str_is_numeric(char *str);
int		check_args(int argc, char *argv[]);
char	check_load_data(char *data);
int		ft_strlen(char *str);
t_dict	*ft_create_dict(char **str, int size);
char	*ft_strjoin(int size, char **strs, char *sep);
char	**ft_split(char *str, char *charset);
char	*load_errors(char *buffer, int dict, ssize_t bytes_read);
char	*load(char *dict_name);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_count_line(char **str);
void	convert_number(t_dict *dict, char *num);
char	*remove_signal(char *number);
void	print_tens_units_aux1(t_dict *dict, char *buf, char *group, int len);
void	print_tens_units_aux2(t_dict *dict, char *buf, char *group, int len);
void	print_tens_units_aux3(t_dict *dict, char *buf, char *group, int len);
void	print_tens_units(t_dict *dict, char *group, int len);
t_dict	*ft_create_dict(char **str, int size);
t_dict	*find_dict(t_dict *dict, char *key, int size);
void	print_hundreds(t_dict *dict, char *group);
void	print_group(t_dict *dict, char *group);
void	print_power(t_dict *dict, int zero_count);
int		is_zero_group(char *group, int size);
void	init_conversion(char *num, int *params);
void	extract_group(char *num, char *group, int *idx, int size);
void	print_non_zero_group(t_dict *dict,
			char *group, int *non_zero, int power);
void	handle_zero_case(t_dict *dict, int non_zero);
void	convert_number(t_dict *dict, char *num);

#endif
