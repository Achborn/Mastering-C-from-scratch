/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_length_of_string_using_pointer.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:25:28 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/25 23:59:33 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	n_strlen(char *str)
{
	char	*pt;
	int	count;

	pt = str;
	count = 0;
	while (*pt != '\0')
	{
		count += 1;
		pt++;
	}
	return (count);
}

int	main(void)
{
	char	str[] = "Lahcen";
	
	printf("Length: %d\n", n_strlen(str));
	return (0);
}
