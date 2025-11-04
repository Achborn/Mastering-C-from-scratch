/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fuction_to_find_LCM_using_GCD.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:06:50 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/04 14:13:55 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	great_common_divisor(int a, int b)
{
	int	r;
	int	tmp;

	r = 0;
	tmp = 0;
	while (b != 0)
	{
		r = a % b;
		tmp = b;
		b = r;
		a = tmp;
	}
	return (a);
}

int	least_common_multiple(int k, int l)
{
	int	m;

	m = (k * l) / great_common_divisor(k, l);
	return (m);
}

int	main(void)
{
	int	x;
	int	y;

	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);
	printf("Least Common Multiple: %d.\n", least_common_multiple(x, y));
}
