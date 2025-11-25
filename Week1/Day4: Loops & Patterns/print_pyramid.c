/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pyramid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:25:08 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/28 23:25:37 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	u;
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;

	u = '*';
	a = 1;
	b = 1;
	c = 1;
	d = 6;
	e = 0;
	while (a < 6)
	{
		while (c < d)
		{
			printf(" ");
			c++;
		}
		d--;
		c = 1;
		while (b < a)
		{
			printf("%c", u);
			b++;
		}
		b = 1;
		while (e < a)
		{
			printf("%c", u);
			e++;
		}
		e = 0;
		printf("\n");
		a++;
	}
	return (0);
}
