/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_an_element_from_a_given_position.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:39:30 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/14 22:39:14 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	size;

	printf("Enter size for the array: ");
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
	int	pos;
	printf("Enter position you want to delete (0, ..., %d): ", size - 1);
	scanf("%d", &pos);
	int	j;
	j = pos;
	while (j < size - 1)
	{
		arr[j] = arr[j + 1];
		j++;
	}
	int	l;
	l = 0;
	while (l < size - 1)
	{
		printf("%d ", arr[l]);
		l++;
	}
}
