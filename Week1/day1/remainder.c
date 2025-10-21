/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remainder.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:16:41 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/21 21:18:04 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	r;
	int	e;
	int	res;
	int	res2;

	printf("Enter a number: ");
	scanf("%d", &r);
	printf("Enter another number: ");
	scanf("%d", &e);
	res2 = r / e;
	printf("\n%d / %d = %d\n", r, e, res2);
	res = r % e;
	printf("Remainder of %d is: %d\n", res2, res);
}
