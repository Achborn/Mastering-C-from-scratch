/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greeting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:16:04 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/21 21:22:15 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	name[14];

	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	printf("> Greetings %s", name);
}
