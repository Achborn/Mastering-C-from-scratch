/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concatenate_two_strings_without_using_strcat.      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:14:42 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/27 21:53:04 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	my_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	my_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = ' ';
	i++;
	int	len;
	len = my_strlen(src);
	j = 0;
	while (j < len)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	int	l;
	int	dest_len;
	l = 0;
	dest_len = my_strlen(dest);
	printf("Concatenated: ");
	while (l < dest_len)
	{
		printf("%c", dest[l]);
		l++;
	}
}

int	main(void)
{
	char	st1[50];
	char	st2[50];

	printf("Enter first name: ");
	fgets(st1, sizeof(st1), stdin);
	printf("Enter last name: ");
	fgets(st2, sizeof(st2), stdin);
	int	src_len;
	int	dest_len;
	src_len = my_strlen(st1);
	dest_len = my_strlen(st2);
	if (src_len && dest_len > 0 && st1[src_len - 1] == '\n' && st2[dest_len - 1] == '\n')
	{
		st1[src_len - 1] = '\0';
		st2[dest_len - 1] = '\0';
	}
	my_strcat(st1, st2);
	return (0);
}
