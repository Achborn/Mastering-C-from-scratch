/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_an_element_at_a_given_position.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:21:40 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/13 22:55:25 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	size;

	printf("Enter size for your array: ");
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
	int	element;
	int	position;
	position = 0;
	printf("Enter number you want to insert: ");
	scanf("%d", &element);
	printf("Enter the position (0, ..., %d): ", (size - 1));
	scanf("%d", &position);
	size += 1;
	int	k;
	int	tmp;
	k = size - 1;
	tmp = position;
	while (k > position)
	{
		arr[k] = arr[k - 1];
		k--;
	}
	arr[position] = element;
	int	l;
	l = 0;
	printf("\n");
	while (l < size)
	{
		printf("%d ", arr[l]);
		l++;
	}
}
