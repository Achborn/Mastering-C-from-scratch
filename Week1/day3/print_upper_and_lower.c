/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_upper_and_lower.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:52:11 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/23 16:00:29 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	upper;
	char	lower;

	upper = 'A';
	lower = 'a';
	while (upper <= 'Z')
	{
		printf("%c, ", upper);
		upper++;
	}
	puts("\n");
	while (lower <= 'z')
	{
		printf("%c, ", lower);
		lower++;
	}
	return (0);
}
