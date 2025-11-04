/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_N_P_0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitro <lnadifi@pooler.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:05:56 by pitro             #+#    #+#             */
/*   Updated: 2025/10/20 14:06:24 by pitro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	x;

	x = 0;
	printf("Enter a number: ");
	scanf("%d", &x);
	if (x > 0)
	{
		printf("X is: Positive\n");
	}
	else if (x == 0)
	{
		printf("X is: Zero\n");
	}
	else
	{
		printf("X is: Negative\n");
	}
	return (0);
}
