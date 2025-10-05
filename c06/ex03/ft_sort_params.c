/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:22:46 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/30 17:36:02 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			total = (int)s1[i] - (int)s2[i];
			return (total);
		}
		i++;
	}
	return (0);
}

void	print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*temp;

	i = 1;
	j = 0;
	k = 0;
	while (i < (argc - 1))
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	print_params(argc, argv);
	return (0);
}
