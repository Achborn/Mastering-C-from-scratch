/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamically_allocate_1d_array_of_n_integers.c      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:18:25 by lnadifi           #+#    #+#             */
/*   Updated: 2025/12/06 17:29:07 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int	*p;

	printf("Enter how may numbers you want in your array: ");
	scanf("%d", &n);

	p = malloc(n * sizeof(int));
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < n)
	{
		printf("Enter %d number: ", j);
		scanf("%d", &p[i]);
		i++;
	}

	int	l;
	int	m;
	int	sum;
	
	l = 0;
	m = 0;
	sum = 0;
	while (m < n)
	{
		sum += p[m];
		m++;
	}
	printf("Array: \n");
	while (l < n)
	{
		printf("%d ", p[l]);
		l++;
	}
	printf("\nSum: %d\n", sum);
	free(p);
	p = NULL;
	return (0);
}
