/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_two_sorted_arrays.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:34:47 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/11 21:45:19 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	arr1[5] = {1, 2, 3, 4, 5};
	int	arr2[5] = {6, 7, 8, 9, 10};
	int	arr3[10] = {0};
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 5)
	{
		arr3[j] = arr1[i];
		i++;
		j++;
	}
	int	l;
	l = 0;
	while (i < 10)
	{
		arr3[j] = arr2[l];
		j++;
		l++;
		i++;
	}
	int	k;
	k = 0;
	while (k < 10)
	{
		printf("%d ", arr3[k]);
		k++;
	}
}
