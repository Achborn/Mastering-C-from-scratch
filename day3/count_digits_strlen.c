/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digits_strlen.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:22:38 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/24 21:43:10 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (i < str[i])
	{
		i++;
	}
	return (i - 1);
}

int	main(void)
{
	char	num[100];

	printf("Enter numbers: ");
	fgets(num, sizeof(num), stdin);
	printf("%d digits.\n", ft_strlen(num));
	return (0);
}
