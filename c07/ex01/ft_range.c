/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 01:35:21 by sarfreit          #+#    #+#             */
/*   Updated: 2025/07/31 02:27:49 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	arr = malloc(4 * size);
	if ((!arr) || (min >= max))
		return (NULL);
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	i = 0;
	int	size = 6;
	int	*nums = ft_range(2, 8);

	while (i < size)
	{
		printf("%d ", nums[i]);
		i++;
	}
	free(nums);
	nums = NULL;
	return (0);
}
*/
