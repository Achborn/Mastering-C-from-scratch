/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access_array_using_pointers.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:14:54 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/25 18:23:28 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	size;
	
	printf("Enter array size: ");
	scanf("%d", &size);
	int	arr[size];
	int	i;

	i = 0;
	printf("Enter %d elements: \n", size);
	while (i < size)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	int	*p;
	int	j;

	j = 0;
	printf("array: \n");
	while (j < size)
	{
		p = &arr[j];
		printf("%d ", *p);
		j++;
	}
}
