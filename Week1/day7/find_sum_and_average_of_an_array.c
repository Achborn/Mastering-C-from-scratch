/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_sum_and_average_of_an_array.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:09:47 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/09 17:25:58 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	arr[10] = {5, 4, 3, 19, 20, 44, 21, 66, 51, 8};
	int	sum;
	int	average;
	int	i;

	sum = 0;
	average = 0;
	i = 0;
	while (i < 10)
	{
		sum = sum + arr[i];
		i++;
	}
	average = sum / 10;
	printf("sum: %d \taverage: %d\n", sum, average);
}
