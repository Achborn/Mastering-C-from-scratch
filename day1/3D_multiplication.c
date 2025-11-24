/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3D_multiplication.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:08:05 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/24 23:27:12 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a_rows;
	int	a_columns;
	printf("Enter row of matrix a: ");
	scanf("%d", &a_rows);
	printf("Enter column of matrix a: ");
	scanf("%d", &a_columns);
	int	arr_a[a_rows][a_columns];
	int	i;
	int	j;
	i = 0;
	j = 0;
	while (i < a_rows)
	{
		while (j < a_columns)
		{
			printf("Enter %d element for matrix a: ", j);
			scanf("%d", &arr_a[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	int	b_rows;
	int	b_columns;
	printf("Enter row for matrix b: ");
	scanf("%d", &b_rows);
	printf("Enter column for matrix b: ");
	scanf("%d", &b_columns);
	int	arr_b[b_rows][b_columns];
	int	a;
	int	b;
	a = 0;
	b = 0;
	while (a < b_rows)
	{
		while (b < b_columns)
		{
			printf("Enter %d element for matrix b: ", b);
			scanf("%d", &arr_b[a][b]);
			b++;
		}
		b = 0;
		a++;
	}
	if (a_columns != b_rows)
	{
		printf("We can't do matrix multiplication.");
		return (0);
	}
	else
	{
		int	res_arr[b_rows][b_columns];
		int	result;
		int	sum;
		int	c;
		int	d;
		int	f;
		c = 0;
		d = 0;
		f = 0;
		result = 0;
		sum = 0;
		while (c < a_rows)
		{
			while (d < b_columns)
			{
				while (f < b_rows)
				{
					result = arr_a[c][f] * arr_b[f][d];
					sum += result;
					f++;
				}
				f = 0;
				res_arr[c][d] = sum;
				sum = 0;
				d++;
			}
			d = 0;
			c++;
		}
		int	y;
		int	z;
		y = 0;
		z = 0;
		printf("Resultant matrix: \n");
		while (y < a_rows)
		{
			while (z < b_columns)
			{
				printf("%d ", res_arr[y][z]);
				z++;
			}
			printf("\n");
			z = 0;
			y++;
		}
	}
	return (0);
}
