/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_palindrome_function.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:06:50 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/04 14:10:04 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_palindrome(int p)
{
	int	rev;
	int	digit;
	int	original;

	rev = 0;
	digit = 0;
	original = p;
	while (p > 0)
	{
		digit = p % 10;
		rev = rev * 10 + digit;
		p /= 10;
	}
	if (rev == original)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	int	num;

	printf("Enter a random number: ");
	scanf("%d", &num);
	printf("%d\n", is_palindrome(num));
	return (0);
}
