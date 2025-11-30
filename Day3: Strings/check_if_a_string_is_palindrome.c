/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_a_string_is_palindrome.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:40:25 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/29 23:30:30 by lnadifi          ###   ########.fr       */
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

void	my_palindrome(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	i--;
	while (s1[i] != '\0')
	{
		s2[j] = s1[i];
		j++;
		i--;
	}
	s2[j] = '\0';
}

int	main(void)
{
	char	str[50];
	char	str1[50];
	int	len;
	int	i;
	int	j;
	int	miss;

	printf("Enter something: ");
	fgets(str, sizeof(str), stdin);
	len = my_strlen(str);
	if (len && str[len - 1] == '\n')
		str[len - 1] = '\0';
	my_palindrome(str, str1);
	i = 0;
	j = 0;
	miss = 0;
	while (str1[i] != '\0' && miss != 1)
	{
		if (str1[j] != str[i])
			miss = 1;
		j++;
		i++;
	}
	j = 0;
	if (miss == 1)
	{
		while (str1[j] != '\0')
		{
			printf("%c", str1[j]);
			j++;
		}
		printf(" is not palindrome.\n");
	}
	else
	{
		j = 0;
		while (str[j] != '\0')
		{
			printf("%c", str[j]);
			j++;
		}
		printf(" is palindrome.\n");
	}
	return (0);
}
