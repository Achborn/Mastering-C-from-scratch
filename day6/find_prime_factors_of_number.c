/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_prime_factors_of_number.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:19:32 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/06 23:06:43 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_prime(int a)
{
	int	i;

	i = 2;
	if (a <= 1)
	{
		return (0);
	}
	while (i < a)
	{
		if ((a % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	prime_factor(int b)
{
	int	pf;
	int	divisor;
	int	prime_factors;

	divisor = 2;
	prime_factors = 0;
	pf = 1;
	while (b != 1)
	{
		if ((b % divisor) == 0)
		{
			if (is_prime(divisor) == 1)
			{
				b /= divisor;
				prime_factors = prime_factors * 10 + divisor;
				pf = pf * divisor;
			}
		}
		else
		{
			divisor++;
		}
	}
	printf("Prime factors: %d\n", prime_factors);
	printf("%d\n", pf);
}

int	main(void)
{
	int	number;

	printf("Enter a number: ");
	scanf("%d", &number);
	prime_factor(number);
}
