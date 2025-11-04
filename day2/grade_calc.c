/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grade_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:23:03 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/21 18:33:40 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	grade;

	printf("Enter your grade: ");
	scanf("%f", &grade);
	if (grade >= 90 && grade <= 100)
	{
		printf("You got A\n");
	}
	else if (grade >= 80 && grade <= 89)
	{
		printf("You got B\n");
	}
	else if (grade >= 70 && grade <= 79)
	{
		printf("You got C\n");
	}
	else if (grade >= 60 && grade <= 69)
	{
		printf("You got D\n");
	}
	else
	{
		printf("You got F\n");
	}
	return (0);
}
