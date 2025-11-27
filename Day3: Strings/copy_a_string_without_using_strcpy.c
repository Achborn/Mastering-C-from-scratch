/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_a_string_without_using_strcpy.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:07:54 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/27 14:42:39 by lnadifi          ###   ########.fr       */
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
		count++;
		i++;
	}
	return (count);
}

void	my_strcpy(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = my_strlen(src);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	main(void)
{
	char	st[50];
	char	st1[50];

	printf("Enter something: ");
	fgets(st, sizeof(st), stdin);
	int	len;

	len = my_strlen(st);
	if(len > 0 && st[len - 1] == '\n')
	{
		st[len - 1] = '\0';
	}
	my_strcpy(st1, st);
	int	i;

	i = 0;
	len = my_strlen(st);
	printf("Destination: ");
	while (i < len)
	{
		printf("%c", st1[i]);
		i++;
	}
	return (0);
}
