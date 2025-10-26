/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_of_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:43:50 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/25 22:13:07 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	num;
	int	sum;
	int	last_digit;

	sum = 0;
	printf("Enter random numbers: ");
	scanf("%d", &num);
	if (num == 0)
	{
		return (0);
	}
	else
	{
		while (num > 0)	{
			last_digit = num % 10;
			sum += last_digit;
			num /= 10;
		}
		printf("%d\n", sum);
	}
	return (0);
}
