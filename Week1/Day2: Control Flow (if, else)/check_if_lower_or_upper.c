/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_lower_or_upper.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:47:16 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/23 14:21:41 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	c;
	char	arr[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char	*p;

	p = &c;
	printf("Enter a character: ");
	scanf(" %c", &c);
	for (int i = 0; i <= arr[i]; i++)
	{
		if (*p == arr[i])
		{
			printf("%c is Upper.\n", c);
			goto end;
		}
	}
	printf("%c is lower.\n", c);
end:
	return (0);
}
