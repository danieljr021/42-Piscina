/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:50:31 by dada-con          #+#    #+#             */
/*   Updated: 2024/07/01 11:59:33 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
/*
int	main(void)
{
    printf("-6 = %d (0)\n", ft_recursive_factorial(-6));
    printf(" 0 = %d (1)\n", ft_recursive_factorial(0));
    printf(" 1 = %d (1)\n", ft_recursive_factorial(1));
    printf(" 2 = %d (2)\n", ft_recursive_factorial(2));
}*/
