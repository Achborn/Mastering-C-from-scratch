/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_the_number_of_vowels_consonants_words.c      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:16:29 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/30 15:25:07 by lnadifi          ###   ########.fr       */
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

void	count_vcw(char *str)
{
	int	j;
	int	v;
	int	c;
	int	w;

	j = 0;
	v = 0;
	c = 0;
	w = 0;
	while (str[j] != '\0')
	{
		if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))
		{
			if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
			{
				v += 1;
			}
			else if (str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U')
			{
				v += 1;
			}
			else
				c += 1;
		}
		if (str[j] == ' ')
			w += 1;
		j++;
	}
	w = w + 1;
	printf("Vowels: %d\n", v);
	printf("Consonants: %d\n", c);
	printf("Words: %d\n", w);
}

int	main(void)
{
	char	str[100];
	int	len;

	printf("Enter a sentence: ");
	fgets(str, sizeof(str), stdin);
	len = my_strlen(str);
	if (len && str[len - 1] == '\n')
		str[len - 1] = '\0';
	count_vcw(str);
	return (0);
}
