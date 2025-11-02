/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:06:50 by lnadifi           #+#    #+#             */
/*   Updated: 2025/11/02 17:14:18 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int power(int n, int e)
{
    int i;
    int r;

    i = 1;
    r = n;
    while (i < e)
    {
        r = r * n;
        i++;
    }
    return (r);
}

int main(void)
{
    int number;
    int exponent;

    number = 0;
    exponent = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter how many times to multiply: ");
    scanf("%d", &exponent);
    printf("%d\n", power(number, exponent));
    return (0);
}