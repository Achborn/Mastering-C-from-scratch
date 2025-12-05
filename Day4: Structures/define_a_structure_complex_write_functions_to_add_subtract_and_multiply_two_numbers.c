/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_a_structure_complex_write_functions_to      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:36:36 by lnadifi           #+#    #+#             */
/*   Updated: 2025/12/04 00:09:16 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

struct	point{
	float x;
	float y;
}point1, point2;

int	main(void)
{
	float	dis;
	float	p1;
	float	p2;

	printf("Enter x-coordinate of the first point: ");
	scanf("%f", &point1.x);
	printf("Enter y-coordinate of the first point: ");
	scanf("%f", &point1.y);
	printf("Enter x-coordinate of the second point: ");
	scanf("%f", &point2.x);
	printf("Enter y-coordinate of the second point: ");
	scanf("%f", &point2.y);
	p1 = point2.x - point1.x;
	p2 = point2.y - point1.y;
	dis = sqrtf(p1 * p1 + p2 * p2);
	printf("Distance between points: %.2f\n", dis);
	return (0);

	//to compile use -lm because gcc doesn't link math functions automatically
}
