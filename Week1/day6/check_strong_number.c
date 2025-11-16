/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_strong_number.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:33:06 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/07 15:35:23 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	fact(int a)
{
	int	fact;
	int	digit;

	fact = 1;
	digit = 0;
	if (a == 0)
	{
		return (1);
	}
	while (a != 0)
	{
		digit = a % 10;
		while (digit >= 1)
		{
			fact = fact * digit;
			digit--;
		}
		a /= 10;
	}
	return (fact);
}

void	strong_num(int n)
{
	int	digit;
	int	strong;
	int	original;

	digit = 0;
	strong = 0;
	original = n;
	while (n != 0)
	{
		digit = n % 10;
		strong = strong + fact(digit);
		n /= 10;
	}
	if (strong == original)
	{
		printf("%d is a strong number\n", strong);
	}
	else
	{
		printf("%d is not a strong number\n", strong);
	}
}

int	main(void)
{
	int	number;

	printf("Enter a number: ");
	scanf("%d", &number);
	strong_num(number);
	return (0);
}
