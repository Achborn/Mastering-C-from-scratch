/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number_pattern.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:39:10 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/02 16:55:16 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	rows;
	int	colum;

	rows = 1;
	colum = 0;
	while (rows < 6)
	{
		while (colum < rows)
		{
			colum++;
			printf("%d", colum);
		}
		colum = 0;
		printf("\n");
		rows++;
	}
	return (0);
}
