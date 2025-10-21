/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   celtofahr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:15:55 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/21 21:15:58 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	cel;
	float	fahr;

	cel = 0.0;
	fahr = 0.0;
	printf("Enter temperature in Celsius: ");
	scanf("%f", &cel);
	fahr = (cel * 9 / 5) + 32;
	printf("Temp in Fahrenheit: %.1f°\n", fahr);
	return (0);
}
