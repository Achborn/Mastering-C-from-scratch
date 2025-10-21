/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   largest_of_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitro <lnadifi@pooler.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:19:43 by pitro             #+#    #+#             */
/*   Updated: 2025/10/20 15:28:48 by pitro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	k;
	int	l;
	int	m;

	printf("Enter first number: ");
	scanf("%d", &k);
	printf("Enter second number: ");
	scanf("%d", &l);
	printf("Enter third number: ");
	scanf("%d", &m);
	if (k > l && k > m)
	{
		printf("\nLargest: %d\n", k);
	}
	else if (l > k && l > m)
	{
		printf("\nLargest: %d\n", l);
	}
	else
	{
		printf("\nLargest: %d\n", m);
	}
	return (0);
}
