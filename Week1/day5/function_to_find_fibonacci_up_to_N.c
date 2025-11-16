/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_to_find_fibonacci_up_to_N.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:06:50 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/06 18:15:27 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	fibonacci(int a)
{
	int	i;
	int	res;
	int	prev;
	int	curr;

	prev = 0;
	curr = 1;
	i = 0;
	while (i < a)
	{
		res = prev + curr;
		curr = prev;
		prev = res;
		i++;
	}
	return (prev);
}

int	main(void)
{
	int	number;

	printf("Enter a number: ");
	scanf("%d", &number);
	printf("%d\n", fibonacci(number));
	return (0);
}
