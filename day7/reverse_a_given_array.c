/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_a_given_array.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:08:58 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/09 18:23:37 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	size;

	printf("Enter the size for your array: ");
	scanf("%d", &size);
	int	arr[size];
	int	i;
	i = 0;
	while (i < size)
	{
		printf("Enter %d number: ", i);
		scanf("%d", &arr[i]);
		i++;
	}
	i = 0;
	printf("\nin order: ");
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	int	rev[size];
	printf("\n");
	printf("reversed: ");
	i = size - 1;
	while (i >= 0)
	{
		rev[i] = arr[i];
		printf("%d ", rev[i]);
		i--;
	}
	return (0);
}
