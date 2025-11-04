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

int add(int a, int b)
{
    return a + b;
}

int sub(int c, int d)
{
    return c - d;
}

int mult(int e, int f)
{
    return e * f;
}

int div(int g, int h)
{
    if (h == 0)
    {
        return (0);
    }
    else
    {
        return g / h;
    }
}

int mod(int i, int j)
{
    if (j == 0)
    {
        return (0);
    }
    else
    {
        return i % j;
    }
}

int main(void)
{
    int first;
    int second;
    char op;

    printf("Enter first number: ");
    scanf("%d", &first);
    printf("choose operation (+ - * / %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &second);
    
    switch (op)
    {
        case '+':
            printf("%d + %d = %d\n", first, second, add(first, second));
            break;
        case '-':
            printf("%d - %d = %d\n", first, second, sub(first, second));
            break;
        case '*':
            printf("%d * %d = %d\n", first, second, mult(first, second));
            break;
        case '/':
            printf("%d / %d = %d\n", first, second, div(first, second));
            break;
        case '%':
            printf("%d %% %d = %d\n", first, second, mod(first, second));
            break;
        default:
            printf("Wrong operator..\n");
            break;
    }
    return (0);
}