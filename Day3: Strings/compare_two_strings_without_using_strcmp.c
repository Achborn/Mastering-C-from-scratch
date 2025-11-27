/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_two_strings_without_using_strcmp.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 22:08:13 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/27 23:43:03 by lnadifi          ###   ########.fr       */
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

int	my_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	diff;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		{
			diff = s1[i] - s2[j];
			return (diff);
		}
		else
		{
			i++;
			j++;
		}
	}
	if (s1[i] < s2[j])
		return (-1);
	return (0);
}

int	main(void)
{
	char	st1[50];
	char	st2[50];
	int	st1_len;
	int	st2_len;

	printf("Enter something: ");
	fgets(st1, sizeof(st1), stdin);
	printf("Enter something else: ");
	fgets(st2, sizeof(st2), stdin);
	st1_len = my_strlen(st1);
	st2_len = my_strlen(st2);
	if (st1_len && st2_len && st1[st1_len - 1] == '\n' && st2[st2_len - 1] == '\n')
	{
		st1[st1_len - 1] = '\0';
		st2[st2_len - 1] = '\0';
	}
	printf("%d\n", my_strcmp(st1, st2));
	return (0);
}
