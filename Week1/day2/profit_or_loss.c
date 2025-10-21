/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   profit_or_loss.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:56:15 by lnadifi           #+#    #+#             */
/*   Updated: 2025/10/21 21:13:12 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	cost_price;
	float	sell_price;
	float	profit;

	profit = 0.0;
	printf("> Enter cost price: $");
	scanf("%f", &cost_price);
	printf("> Enter selling price: $");
	scanf("%f", &sell_price);
	profit = sell_price - cost_price;
	printf("> Profit: $%.2f\n", profit);
	return (0);
}
