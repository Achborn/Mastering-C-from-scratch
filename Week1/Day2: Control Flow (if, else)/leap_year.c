/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leap_year.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitro <lnadifi@pooler.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:49:56 by pitro             #+#    #+#             */
/*   Updated: 2025/10/20 20:55:45 by pitro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	year;

	year = 0;
	printf("Enter a year: ");
	scanf("%d", &year);
	if ((year % 4) == 0)
	{
		if ((year % 100) == 0)
		{
			if ((year % 400) == 0)
			{
				printf("%d is Leap.\n", year);
			}
			else
			{
				printf("%d is not Leap.\n", year);
			}
		}
		else
		{
			printf("%d is Leap.\n", year);
		}
	}
	else
	{
		printf("%d is not a Leap year.\n", year);
	}
	return (0);
}
