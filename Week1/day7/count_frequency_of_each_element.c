/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_frequency_of_each_element.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 20:56:01 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/11 21:29:53 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	size;
	int	i;

	printf("Enter size for array: ");
	scanf("%d", &size);
	int	arr[size];
	i = 0;
	while (i < size)
	{
		printf("Enter %d number: ", i);
		scanf("%d", &arr[i]);
		i++;
	}
	int	count;
	int	c;
	int	j;
	int	seen;
	i = 0;
	count = 0;
	j = 0;
	c = arr[0];
	seen = 0;
	while (i < size)
	{
		if (arr[i] == -1)
		{
			i++;
			continue;
		}
		c = arr[i];
		while (j < size)
		{
			if (arr[j] == c)
			{
				count++;
			}
			j++;
		}
		printf("%d appeared %d times\n", arr[i], count);
		int	u;
		u = 0;
		while (u < size)
		{
			if (arr[u] == c)
				arr[u] = -1;
			u++;
		}
		count = 0;
		j = 0;
		i++;
	}
	return (0);
}
