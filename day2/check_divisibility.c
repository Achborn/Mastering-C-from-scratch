/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_divisibility.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:49:17 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/21 19:52:18 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	nu;

	printf("Enter a number: ");
	scanf("%d", &nu);
	if ((nu % 5) == 0 && (nu % 11) == 0)
	{
		printf("%d is divisible by 5 and 11.\n", nu);
	}
	else
	{
		printf("%d is not divisible by 5 and 11.\n", nu);
	}
	return (0);
}
