/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   area_of_circle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:15:26 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/21 21:15:30 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define PI 3.14

int	main(void)
{
	double	raduis;
	double	area;

	raduis = 0.0;
	area = 0.0;
	printf("Enter raduis of a circle: ");
	scanf("%lf", &raduis);
	area = PI * raduis * raduis;
	printf("Area of circle: %.2lf", area);
	return (0);
}
