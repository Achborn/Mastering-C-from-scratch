/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_length_of_string_without_strlen.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 23:42:43 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/27 14:27:03 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	my_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\n')
			count++;
		i++;
	}
	return (count);
}

int	main(void)
{
	char	str[100];

	printf("Enter anything: ");
	fgets(str, sizeof(str), stdin);
	printf("Length: %d\n", my_strlen(str));
	return (0);
}
