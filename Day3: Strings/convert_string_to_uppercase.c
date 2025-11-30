/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_string_to_uppercase.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:28:13 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/28 13:12:24 by lnadifi          ###   ########.fr       */
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

void	st_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= ' ';
		i++;
	}
}

int	main(void)
{
	char	st[50];
	int	len;
	int	i;

	printf("Enter something: ");
	fgets(st, sizeof(st), stdin);
	len = my_strlen(st);
	if (len && st[len - 1] == '\n')
		st[len - 1] = '\0';
	i = 0;
	st_upper(st);
	printf("Upper: ");
	while (st[i] != '\0')
	{
		printf("%c", st[i]);
		i++;
	}
	return (0);
}
