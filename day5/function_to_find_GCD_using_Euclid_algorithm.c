/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_to_find_GCD_using_Euclid_algorithm.c      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:06:50 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/04 14:15:32 by lnadifi          ###   ########.fr       */
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

int	main(void)
{
	int	first_num;
	int	second_num;

	printf("Enter the first number: ");
	scanf("%d", &first_num);
	printf("Enter the second number: ");
	scanf("%d", &second_num);
	printf("The Great Common Divisor is: %d.\n", great_common_divisor(first_num, second_num));
}
