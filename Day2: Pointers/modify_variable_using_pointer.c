/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_variable_using_pointer.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 23:34:37 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/24 23:38:59 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	num;
	int	new;
	int	*p;

	p = &num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Number: %d\n", num);
	printf("Enter a new value: ");
	scanf("%d", &new);
	*p = new;
	printf("New number: %d\n", *p);
	return (0);
}
