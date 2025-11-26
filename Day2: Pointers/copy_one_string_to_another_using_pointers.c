/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_one_string_to_another_using_pointers.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:50:37 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/26 23:31:54 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	n_strlen(char *str)
{
	char	*p;
	int	count;

	p = str;
	count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}

void	n_strcpy(char *dest_str, char *source_str)
{
	char	*p1;
	char	*p2;
	int	len;
	int	i;

	i = 0;
	p1 = source_str;
	p2 = dest_str;
	len = n_strlen(source_str);
	printf("Destination: ");
	while (i < len)
	{
		*p2 = *p1;
		printf("%c", *p2);
		p1++;
		p2++;
		i++;
	}
	*p2 = '\0';
}

int	main(void)
{
	char	str1[20];
	char	str2[20];

	printf("Enter your name: ");
	fgets(str1, sizeof(str1), stdin);
	int	length;

	length = n_strlen(str1);
	if (length > 0 && str1[length - 1] == '\n')
	{
		str1[length - 1] = '\0';
	}
	n_strcpy(str2, str1);
	return (0);
}
