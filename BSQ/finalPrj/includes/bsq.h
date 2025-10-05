/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:08:51 by sarfreit          #+#    #+#             */
/*   Updated: 2025/08/06 19:12:38 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUF_SIZE 4096

typedef struct s_map
{
	int		rows;
	int		cols;
	char	empty;
	char	obstacle;
	char	full;
	char	**data;
}	t_map;

typedef struct s_point
{
	int	x;
	int	y;
	int	size;
}	t_point;

int		read_header(int fd, t_map *map);
int		read_map(int fd, t_map *map);
int		solve_map(t_map *map, t_point *max);
int		parse_map(char *filename, t_map *map);
int		ft_atoi(char *str, int len);
int		ft_strlen(char *str);
void	exec_map(char *filename);
void	free_map(t_map *map);
void	fill_square(t_map *map, t_point max);
void	print_map(t_map *map);
void	print_error(void);

#endif
