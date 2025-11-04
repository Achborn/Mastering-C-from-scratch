/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_inverted_pyramid.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:22:12 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/29 21:06:12 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	k;
	int	a;
	int	b;
	int	c;
	int	e;
	int	d;

	k = '*';
	a = 6;
	b = 1;
	c = 0;
	e = 0;
	d = 1;
	while (a > 0)
	{
		while (c < d)
		{
			printf(" ");
			c++;
		}
		d++;
		c = 0;
		while (b < a)
		{
			printf("%c", k);
			b++;
		}
		b = 1;
		while (e < a)
		{
			printf("%c", k);
			e++;
		}
		e = 0;
		printf("\n");
		a--;
	}
	return (0);
}
