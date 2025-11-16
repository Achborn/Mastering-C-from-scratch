/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right_angled_triangle.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:22:17 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/28 20:26:55 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	pat;
	int	i;
	int	j;

	pat = '*';
	i = 1;
	j = 0;
	while (i <= 5)
	{
		while (j < i)
		{
			printf("%c", pat);
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
	return (0);
}
