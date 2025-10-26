/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:08:33 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/24 21:43:28 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	number;
	int	i;
	int	count_digits;

	i = 0;
	count_digits = 1;
	printf("Enter a number: ");
	scanf("%d", &number);
	if (number == 0)
	{
		printf("Sum: %d.\n", count_digits);
	}
	else
	{
		while (i <= number)
		{
			number /= 10;
			count_digits += 1;
			i++;
		}
		printf("%d digits.\n", count_digits);
	}
	return (0);
}
