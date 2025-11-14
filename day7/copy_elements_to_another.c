/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_elements_to_another.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 20:42:02 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/09 20:48:09 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	size;
	int	i;

	printf("Enter size for the array: ");
	scanf("%d", &size);
	int	arr1[size];
	i = 0;
	while (i < size)
	{
		printf("Enter %d number: ", i);
		scanf("%d", &arr1[i]);
		i++;
	}
	i = 0;
	int	arr2[size];
	while (i < size)
	{
		arr2[i] = arr1[i];
		printf("%d ", arr2[i]);
		i++;
	}
	return (0);
}
