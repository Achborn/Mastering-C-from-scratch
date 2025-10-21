/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perimeter_of_rectangle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:16:32 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/21 21:16:36 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	l;
	double	w;
	double	p;

	l = 0.0;
	w = 0.0;
	p = 0.0;
	printf("Enter length of rectangle: ");
	scanf("%lf", &l);
	printf("Enter width of rectangle: ");
	scanf("%lf", &w);
	p = 2 * (l + w);
	printf("Perimeter of rectangle: %.1lf\n", p);
	return (0);
}
