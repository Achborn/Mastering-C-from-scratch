/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_all_factors_of_a_number.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:49:06 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/06 21:08:07 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	factor(int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			printf("%d, ", i);
		}
		i++;
	}
}

int	main(void)
{
	int	number;

	printf("Enter a number: ");
	scanf("%d", &number);
	factor(number);
	return (0);
}
