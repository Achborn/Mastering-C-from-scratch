/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_string_to_lowercase.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:54:56 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/28 12:27:18 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	st_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += ' ';
		i++;
	}
}

int	main(void)
{
	char	st1[50];

	printf("Enter anything: ");
	fgets(st1, sizeof(st1), stdin);
	int	len;
	len = my_strlen(st1);
	if (len && st1[len - 1] == '\n')
		st1[len - 1] = '\0';
	int	i;

	i = 0;
	st_lower(st1);
	printf("Lower: ");
	while (st1[i] != '\0')
	{
		printf("%c", st1[i]);
		i++;
	}
	return (0);
}
