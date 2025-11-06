/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_to_convert_decimal_to_binary.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:06:50 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/06 18:12:28 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	binary(int a)
{
	int	quotient;
	int	remainder;
	int	bin;
	int	position;

	remainder = 0;
	bin = 0;
	quotient = 0;
	position = 1;
	while (a != 0)
	{
		quotient = a / 2;
		bin = a % 2;
		remainder = remainder + (bin * position);
		position *= 10;
		a = quotient;
	}
	printf("Binary: %d\n", remainder);
}

int	main(void)
{
	int	number;

	printf("Enter a decimal number: ");
	scanf("%d", &number);
	binary(number);
	return (0);
}
