/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_structure_student_store_and_display.c       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 23:06:24 by lnadifi           #+#    #+#             */
/*   Updated: 2025/12/02 00:06:24 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct students{
	char	name[50];
	int	roll;
	float	marks;
};

int	main(void)
{
	struct students s[5];
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < 5)
	{
		printf("Enter %d student name: ", j);
		fgets(s[i].name, 50, stdin);
		int	len;
		len = my_strlen(s[i].name);
		if (len > 0 && s[i].name[len - 1] == '\n')
			s[i].name[len - 1] = '\0';
		printf("Enter %d student roll (ID): ", j);
		scanf("%d", &s[i].roll);
		printf("Enter %d student mark: ", j);
		scanf("%f", &s[i].marks);
		getchar();
		i++;
		j++;
	}
	i = 0;
	printf("\n");
	printf("--- Student Database: ---\n");
	while (i < 5)
	{
		printf("\nName: %s", s[i].name);
		printf("\nRoll: %d", s[i].roll);
		printf("\nMark: %.1f\n", s[i].marks);
		printf("\n");
		i++;
	}
	return (0);
}
