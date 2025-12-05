/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_record_for_10_employees_and_find_the_hi      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:42:22 by lnadifi           #+#    #+#             */
/*   Updated: 2025/12/05 22:28:38 by lnadifi          ###   ########.fr       */
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

struct employers{
	char	name[50];
	int	id;
	float	salary;
};

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	struct employers e[10];
	while (i < 10)
	{
		printf("Enter %d employer name: ", j);
		fgets(e[i].name, sizeof(e[i].name), stdin);
		int	len;
		len = my_strlen(e[i].name);
		if (len && e[i].name[len - 1] == '\n')
			e[i].name[len - 1] = '\0';
		printf("Enter %d employer ID: ", j);
		scanf("%d", &e[i].id);
		printf("Enter %d employer salary: ", j);
		scanf("%f", &e[i].salary);
		getchar();
		i++;
		j++;
	}
	int	l;
	float	highest_salary;
	int	index;

	highest_salary = e[0].salary;
	l = 1;
	index = 0;
	while (l < 10)
	{
		if (e[l].salary > highest_salary)
		{
			highest_salary = e[l].salary;
			index = l;
		}
		l++;
	}
	printf("Employee with highest salary: \n");
	printf("Name: %s\n", e[index].name);
	printf("ID: %d\n", e[index].id);
	printf("Salary: %.2f\n", e[index].salary);
	return (0);
}
