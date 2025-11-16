/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vowel_or_consonant.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitro <lnadifi@pooler.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:23:44 by pitro             #+#    #+#             */
/*   Updated: 2025/10/20 22:36:29 by pitro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	c;

	printf("Enter a character: ");
	scanf(" %c", &c);
	if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i')
	{
		printf("%c is a Vowel character.\n", c);
	}
	else if (c == 'A' || c == 'E' || c == 'O' || c == 'U' || c == 'I')
	{
		printf("%c is a Vowel character.\n", c);
	}
	else
	{
		printf("%c is a Consonant character.\n", c);
	}
	return (0);
}
