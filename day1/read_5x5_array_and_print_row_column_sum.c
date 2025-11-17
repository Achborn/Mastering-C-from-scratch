/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_5x5_array_and_print_row_column_sum.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:57:28 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/17 14:27:13 by lnadifi          ###   ########.fr       */
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
		printf("\n");
		j = 0;
		i++;
	}
	int	column_total;
	int	row_total;
	int	k;
	int	l;

	row_total = 0;
	column_total = 0;
	k = 0;
	l = 0;
	printf("Row total:  ");
	while (k < row)
	{
		while (l < column)
		{
			row_total += arr[k][l];
			l++;
		}
		printf("%d ", row_total);
		row_total = 0;
		l = 0;
		k++;
	}
	printf("\nColumn total:  ");
	int	m;
	int	n;

	m = 0;
	n = 0;
	while (n < column)
	{
		while (m < row)
		{
			column_total += arr[m][n];
			m++;
		}
		printf("%d ", column_total);
		column_total = 0;
		m = 0;
		n++;
	}
	printf("\n");
	return (0);
}