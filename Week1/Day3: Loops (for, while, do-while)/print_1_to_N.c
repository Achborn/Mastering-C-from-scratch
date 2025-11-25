/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:29:37 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/23 15:43:27 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	num;
	int	i;

	i = 1;
	printf("Enter a number: ");
	scanf("%d", &num);
	while (i <= num)
	{
		printf("%d\n", i);
		i++;
	}
	return (0);
}
