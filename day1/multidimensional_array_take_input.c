/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multidimensional_array_take_input.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:43:00 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/16 21:55:03 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	row;
	int	column;

	printf("Enter how many rows you want: ");
	scanf("%d", &row);
	printf("Enter how many columns you want: ");
	scanf("%d", &column);
	int	arr[row][column];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < column)
		{
			printf("Enter %d numbers in %d row: ", j, i);
			scanf("%d", &arr[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	int	k;
	int	l;

	k = 0;
	l = 0;
	while (k < row)
	{
		while (l < column)
		{
			printf("%d ", arr[k][l]);
			l++;
		}
		l = 0;
		printf("\n");
		k++;
	}
	return (0);
}
