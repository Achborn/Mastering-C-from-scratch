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

int count(int   n)
{
    int count_digits;

    count_digits = 0;
    while(n != 0)
    {
        n /= 10;
        count_digits++;
    }
    return (count_digits);
}

int power(int   b, int c)
{
    int i;
    int p;

    i = 1;
    p = b;
    while (i < c)
    {
        p = p * b;
        i++;
    }
    return (p);
}

int    is_armstrong(int    a)
{
    int exponent;
    int i;
    int digits;
    int original;
    int total;

    exponent = count(a);
    i = 0;
    digits = 0;
    total = 0;
    original = a;
    while (i < exponent)
    {
        digits = a % 10;
        total = total + power(digits, exponent);
        a = a / 10;
        i++;
    }
    if (total == original)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d\n", is_armstrong(number));
}