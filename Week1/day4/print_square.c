/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:25:40 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/29 21:32:21 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	row;
	int	column;
	int	j;
	char	astrik;

	astrik = '*';
	row = 0;
	column = 0;
	j = 5;
	while (row < 5)
	{
		while (column < j)
		{
			printf("%c", astrik);
			column++;
		}
		column = 0;
		printf("\n");
		row++;
	}
	return (0);
}
