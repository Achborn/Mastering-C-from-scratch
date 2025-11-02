/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:06:50 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/02 17:14:18 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	prime(int	a)
{
	int i;

	i = 2;
	if (a <= 1)
	{
		return 0;
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

int	main(void)
{
	int	num;

	num = 0;
	printf("Enter any number in your mind: ");
	scanf("%d", &num);
	printf("%d\n", prime(num));
	return (0);
}
