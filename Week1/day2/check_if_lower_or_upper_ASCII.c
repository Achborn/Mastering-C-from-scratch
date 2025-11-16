/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_lower_or_upper_ASCII.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:57:13 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/23 15:02:17 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	c;

	printf("Enter a Character: ");
	scanf(" %c", &c);
	if (c >= 65 && c <= 90)
	{
		printf("%c is Upper.\n", c);
	}
	else
	{
		printf("%c is Lower.\n", c);
	}
	return (0);
}
