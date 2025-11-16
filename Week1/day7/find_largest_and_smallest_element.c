/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_largest_and_smallest_element.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:26:22 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/09 18:06:45 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	size;
	int	i;

	printf("Enter size of array: ");
	scanf("%d", &size);
	int	arr[size];
	i = 0;
	while (i < size)
	{
		printf("Enter %d number: ", i);
		scanf("%d", &arr[i]);
		i++;
	}
	i = 0;
	int	l;
	int	s;
	l = arr[0];
	s = arr[0];
	while (i < size)
	{
		if (arr[i] > l)
			l = arr[i];
		if (arr[i] < l)
			s = arr[i];
		i++;
	}
	printf("Largest and smallest elements are: %d, %d\n", l, s);
}
