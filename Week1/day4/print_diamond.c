/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_diamond.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:27:02 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/31 14:43:39 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	row;
	int	space;
	int	space_counter;
	int	astrik_counter;
	char	astrik;

	astrik = '*';
	row = 1;
	space = 0;
	space_counter = 5;
	astrik_counter = 0;
	while (row < 6)
	{
		while (space < space_counter)
		{
			printf(" ");
			space++;
		}
		space_counter--;
		space = 0;
		while (astrik_counter < row)
		{
			printf("%c", astrik);
			astrik_counter++;
		}
		astrik_counter = 1;
		while (astrik_counter < row)
		{
			printf("%c", astrik);
			astrik_counter++;
		}
		astrik_counter = 0;
		printf("\n");
		row++;	
	}
	row = 1;
	space = 1;
	space_counter = 2;
	astrik_counter = 6;
	while (row < 6)
	{
		while(space < space_counter)
		{
			printf(" ");
			space++;
		}
		space_counter++;
		space = 1;
		while (astrik_counter > row)
		{
			printf("%c", astrik);
			astrik_counter--;
		}
		astrik_counter = 5;
		while (astrik_counter > row)
		{
			printf("%c", astrik);
			astrik_counter--;
		}
		astrik_counter = 6;
		printf("\n");
		row++;
	}
	return (0);
}
