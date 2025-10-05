/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 02:54:13 by sarfreit          #+#    #+#             */
/*   Updated: 2025/08/07 21:24:30 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	is_sep(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_lines(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] && is_sep(charset, str[i]))
			i++;
		if (str[i] && !is_sep(charset, str[i]))
		{
			len++;
			while (str[i] && !is_sep(charset, str[i]))
				i++;
		}
	}
	return (len);
}

char	*ft_strcpy(char *str, int start, int end)
{
	char	*words;
	int		i;

	words = (char *) malloc((end - start + 1) * sizeof(char));
	i = 0;
	while (start < end)
	{
		words[i] = str[start];
		i++;
		start++;
	}
	words[i] = '\0';
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		start;
	int		line;
	char	**split;

	split = (char **) malloc
		((ft_count_lines (str, charset) + 1) * sizeof (char *));
	i = 0;
	start = 0;
	line = 0;
	if (!split)
		return (0);
	while (str[i])
	{
		while (str[i] && is_sep(charset, str[i]))
			i++;
		start = i;
		while (str[i] && !is_sep(charset, str[i]))
			i++;
		if (start < i)
			split[line++] = ft_strcpy(str, start, i);
	}
	split[line] = 0;
	return (split);
}
/*
#include <stdio.h>

int main(void)
{
    char **res = ft_split("um,dois;tres quatro", ",; ");
    int i = 0;

    while (res[i])
        printf("%s\n", res[i++]);

    i = 0;
    while (res[i])
        free(res[i++]);
    free(res);

    return 0;
}
*/
