/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   average.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:15:40 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/21 21:15:49 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	z;
	int	avr;

	x = 5;
	y = 2;
	z = 44;
	avr = (x + y + z) / 3;
	printf("Average of three numbers is: %d\n", avr);
	return (0);
}
