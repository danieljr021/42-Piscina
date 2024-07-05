/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:55:39 by dada-con          #+#    #+#             */
/*   Updated: 2024/07/01 11:59:53 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
int        main(void)
{
    printf("-3 ^-1 = %d (0)\n", ft_iterative_power(-3, -1));
    printf("-3 ^ 0 = %d (1)\n", ft_iterative_power(-3, 0));
    printf("-3 ^ 1 = %d (-3)\n", ft_iterative_power(-3, 1));
    printf("-3 ^ 2 = %d (9)\n", ft_iterative_power(-3, 2));
    printf("-3 ^ 3 = %d (-27)\n", ft_iterative_power(-3, 3));   
}*/
