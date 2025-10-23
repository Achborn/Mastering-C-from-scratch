/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiplication_table.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:32:30 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/23 22:52:29 by lnadifi          ###   ########.fr       */
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
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}
	return (0);
}
