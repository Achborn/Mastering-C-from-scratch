/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_print_array_element.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:48:38 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/09 13:05:08 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	printf("Enter size of the array: ");
	scanf("%d", &size);
	int	arr[size];
	while (i < size)
	{
		printf("Enter %d number: ", i);
		scanf("%d", &arr[i]);
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
		i++;
	}
	return (0);
}
