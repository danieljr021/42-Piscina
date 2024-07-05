/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:56:45 by dada-con          #+#    #+#             */
/*   Updated: 2024/07/01 10:16:43 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (n > n * nb)
	{
		return (0);
	}
	else if (power > 1)
	{
		return (n * ft_recursive_power(n, power - 1));
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
/*
int	main(void)
{
	printf("-3 ^-1 = %d (0)\n", ft_recursive_power(-3, -1));
	printf("-3 ^ 0 = %d (1)\n", ft_recursive_power(-3, 0));
	printf("-3 ^ 1 = %d (-3)\n", ft_recursive_power(-3, 1));
	printf("-3 ^ 2 = %d (9)\n", ft_recursive_power(-3, 2));
}*/
