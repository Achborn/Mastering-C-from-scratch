/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial_of_number_loop.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:30:55 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/26 12:29:16 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	f;
	int	fact;

	f = 0;
	fact = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	if (n == 0)
	{
		return (1);
	}
	else
	{
		while (n > 0)
		{
			f = fact = fact * n;
			n--;
		}
	}
	printf("%d\n", f);
	return (0);
}
