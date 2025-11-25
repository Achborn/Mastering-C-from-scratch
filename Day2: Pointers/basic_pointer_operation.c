/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_pointer_operation.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 23:28:40 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/24 23:33:48 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	int	*ptr;
	int	*ptr1;
	ptr = &a;
	ptr1 = &b;

	printf("%d + %d = %d\n", a, b, *(ptr) + *(ptr1));
	return (0);
}
