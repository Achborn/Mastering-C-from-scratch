/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_armstrong_numbers_in_range.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:44:15 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/07 23:40:43 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count(int a)
{
	int	count_digits;

	count_digits = 0;
	while (a != 0)
	{
		a /= 10;
		count_digits++;
	}
	return (count_digits);
}

int	power(int b, int e)
{
	int	i;
	int	g;

	i = 1;
	g = b;
	while (i < e)
	{
		g = g * b;
		i++;
	}
	return (g);
}

void	armstrong(int x, int y)
{
	int	j;
	int	k;
	int	p;
	int	t;

	j = 0;
	k = x;
	p = 0;
	t = 0;
	while (x <= y)
	{
		while (j < count(x))
		{
			t = k % 10;
			p = p + power(t, count(x));
			k /= 10;
			j++;
		}
		if (p == x)
		{
			printf("%d, ", p);
		}
		x++;
		j = 0;
		p = 0;
		k = x;
	}
}

int	main(void)
{
	int	number1;
	int	number2;

	printf("Enter first number: ");
	scanf("%d", &number1);
	printf("Enter second number: ");
	scanf("%d", &number2);
	armstrong(number1, number2);
	return (0);
}
