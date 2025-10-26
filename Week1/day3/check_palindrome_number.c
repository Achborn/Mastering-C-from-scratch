/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_palindrome_number.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:13:58 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/25 20:46:00 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	original_number;
	int	number;
	int	rev;
	int	digit;

	rev = 0;
	printf("Enter a random number: ");
	scanf("%d", &number);
	original_number = number;
	while(number > 0)
	{
		digit = number % 10;
		rev = rev * 10 + digit;
		number /= 10;
	}
	if (rev == original_number)
	{
		printf("%d is palindrome.\n", rev);
	}
	else
	{
		printf("%d is not palindrome.\n", rev);
	}
	return (0);
}
