/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hollow_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:43:20 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/31 13:20:29 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	first_row;
	int	second_row;
	int	colum;
	int	f;
	char	astrik;

	astrik = '*';
	first_row = 0;
	second_row = 0;
	colum = 0;
	f = 0;
	while (first_row < 5)
	{
		printf("%c", astrik);
		first_row++;
	}
	first_row = 2;
	printf("\n");
	while (second_row < 4)
	{
		colum = 0;
		while (f < first_row)
		{
			printf("%c", astrik);
			while(colum < 3)
			{
				printf(" ");
				colum++;
			}
			f++;
		}
		f = 0;
		printf("\n");
		second_row++;
	}
	first_row = 0;
	while (first_row < 5)
	{
		printf("%c", astrik);
		first_row++;
	}
	return (0);
}
