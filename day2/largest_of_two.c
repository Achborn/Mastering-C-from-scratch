/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   largest_of_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitro <lnadifi@pooler.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:38:40 by pitro             #+#    #+#             */
/*   Updated: 2025/10/20 15:17:24 by pitro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	a > b ? printf("\nLargest: %d\n", a) : printf("\nLargest: %d\n", b);
	return (0);
}
