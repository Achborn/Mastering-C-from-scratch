/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_perfect_number.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:07:09 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/07 21:40:30 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	perfect_num(int n)
{
	int	i;
	int	j;
	int	sum;

	i = 1;
	j = 0;
	sum = 0;
	while (j < n - 1)
	{
		if ((n % i) == 0)
		{
			sum = sum + i;
		}
		i++;
		j++;
	}
	if (sum != n || n == 0 || n == 1)
	{
		printf("%d is not a perfect number\n", sum);
	}
	else
	{
		printf("%d is a perfect number\n", sum);
	}
}

int	main(void)
{
	int	number;

	printf("Enter a number: ");
	scanf("%d", &number);
	perfect_num(number);
	return (0);
}
