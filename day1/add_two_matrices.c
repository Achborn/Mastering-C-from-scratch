/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_two_matrices.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:41:54 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/23 00:56:36 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	row;
	int	column;
	int	i;
	int	j;

	printf("Enter row & column: ");
	scanf("%d %d", &row, &column);
	int	arr[row][column];
	i = 0;
	j = 0;
	printf("Enter elements for matrix a: \n");
	while (i < row)
	{
		while (j < column)
		{
			scanf("%d", &arr[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	int	nrow;
	int	ncolumn;
	nrow = 0;
	ncolumn = 0;
	printf("Enter row and column for our new matrix: ");
	scanf("%d %d", &nrow, &ncolumn);
	int	narr[nrow][ncolumn];
	int	k;
	int	l;
	k = 0;
	l = 0;
	if (row != nrow || column != ncolumn)
	{
		printf("Sorry! we can't add the matrix.\n");
	}
	else
	{
		while (k < nrow)
		{
			while (l < ncolumn)
			{
				narr[k][l] = arr[k][l];
				l++;
			}
			l = 0;
			k++;
		}
		int	x;
		int	y;
		x = 0;
		y = 0;
		printf("New matrix: \n");
		while (x < nrow)
		{
			while (y < ncolumn)
			{
				printf("%d ", narr[x][y]);
				y++;
			}
			printf("\n");
			y = 0;
			x++;
		}
	}
	return (0);
}
