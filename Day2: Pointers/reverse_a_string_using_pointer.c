/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_a_string_using_pointer.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:38:18 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/26 21:38:40 by lnadifi          ###   ########.fr       */
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
		count += 1;
		p++;
	}
	return (count);
}

void	s_reverse(char *str)
{
	char	*p1;
	char	*p2;
	int	i;
	int	len;

	p1 = str;
	i = 0;
	printf("Reversed: ");
	while (*p1 != '\0')
	{
		p1++;
	}
	p2 = p1;
	len = n_strlen(str);
	while (i < len)
	{
		p2 = p2 - 1;
		printf("%c", *p2);
		i++;
	}
}

int	main(void)
{
	char	str1[13];

	printf("Enter anything: ");
	fgets(str1, sizeof(str1), stdin);
	int	len;
	len = n_strlen(str1);
	if(len > 0 && str1[len - 1] == '\n')
	{
		str1[len - 1] = '\0';
	}
	s_reverse(str1);
}
