/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:09:19 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/25 17:07:45 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	number;
	int	digit;
	int	rev;

	digit = 0;
	rev = 0;
	printf("Enter random numbers: ");
	scanf("%d", &number);
	if (number == 0)
	{
		return (0);
	}
	else
	{
		printf("Reversed: ");
		while (number > 0)
		{
			digit = number % 10;
			rev = digit;
			printf("%d", rev);
			number /= 10;
		}
	}
	return (0);
}
