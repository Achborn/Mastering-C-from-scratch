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

int fibonacci(int   a)
{
    int i;
    int res;
    int prev;
    int curr;

    prev = 0;
    curr = 1;
    i = 0;
    while (i < a)
    {
        res = prev + curr;
        curr = prev;
        prev = res;
        i++;
    }
    return (prev);
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d\n", fibonacci(number));
    return (0);
}