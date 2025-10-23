/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_of_N.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:22:35 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/23 21:02:05 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	sum;

	i = 1;
	sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("Sum of N: %d\n", sum);
	return (0);
}
