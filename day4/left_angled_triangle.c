/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left_angled_triangle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:42:52 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/28 20:26:27 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	k;
	int	a;
	int	b;
	int	c;
	int	d;

	k = '*';
	a = 1;
	b = 0;
	c = 0;
	d = 5;
	while (a < 6)
	{
		while (c < d)
		{
			printf(" ");
			c++;
		}
		d--;
		c = 0;
		while (b < a)
		{
			printf("%c", k);
			b++;
		}
		b = 0;
		printf("\n");
		a++;
	}
	return (0);
}
