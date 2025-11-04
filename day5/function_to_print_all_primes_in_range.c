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

int is_prime(int    a)
{
    int i;

    i = 2;
    if (a <= 1)
    {
        return (0);
    }
    while (i < a)
    {
        if (a % i == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

void    display_prime(int   k, int  l)
{
    int j;

    j = k;
    while (j <= l)
    {
        if (is_prime(j) == 1)
        {
            printf("%d ", j);
        }
        j++;
    }
}

int main(void)
{
    int first;
    int last;

    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter last number: ");
    scanf("%d", &last);
    display_prime(first, last);
}