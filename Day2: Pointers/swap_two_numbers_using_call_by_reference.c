/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_two_numbers_using_call_by_reference.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 23:40:29 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/24 23:46:11 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *pt1, int *pt2)
{
	int	tem;
	tem = 0;
	tem = *pt1;
	*pt1 = *pt2;
	*pt2 = tem;
	printf("%d\t%d\n", *pt1, *pt2);
}

int	main(void)
{
	int	num1;
	int	num2;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("%d\t%d\n", num1, num2);
	printf("Swaped: \n");
	swap(&num1, &num2);
	return (0);
}
