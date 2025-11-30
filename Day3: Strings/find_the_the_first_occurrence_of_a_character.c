/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_the_the_first_occurrence_of_a_character.      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 15:51:49 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/30 17:00:03 by lnadifi          ###   ########.fr       */
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

int	occ(char *st, char c)
{
	int	i;

	i = 0;
	while (st[i] != '\0')
	{
		if (st[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	t_occ(char *str, char c)
{
	int	j;
	int	occ;

	j = 0;
	occ = 0;
	while (str[j] != '\0')
	{
		if (str[j] == c)
			occ++;
		j++;
	}
	return (occ);
}

int	main(void)
{
	char	str[100];
	char	c;
	int	len;
	int	index;

	printf("Enter something: ");
	fgets(str, sizeof(str), stdin);
	printf("Enter a character to check: ");
	scanf("%c", &c);
	len = my_strlen(str);
	if (len && str[len - 1] == '\n')
		str[len - 1] = '\0';
	index = occ(str, c);
	if (index != -1)
	{
		printf("%c occured at index %d.\n", c, index);
		printf("%c occured %d times.\n", c, t_occ(str, c));
	}
	else
		printf("Character %c not found in the string.\n", c);
	return (0);
}
