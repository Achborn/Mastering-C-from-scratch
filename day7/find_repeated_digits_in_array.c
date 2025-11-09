/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_repeated_digits_in_array.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:47:55 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/09 16:38:21 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	seen[10] = {0};
	int	r;
	int	i;

	r = 0;
	i = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (n > 0)
	{
		r = n % 10;
		if (seen[r] == 1)
			break;
		seen[r] = 1;
		n /= 10;
	}
	if (n > 0)
		printf("Seen before.\n");
	else
		printf("Not seen before.\n");
	return (0);
}
