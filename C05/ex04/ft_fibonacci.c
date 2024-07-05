/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:57:51 by dada-con          #+#    #+#             */
/*   Updated: 2024/07/01 21:20:57 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index > 1)
	{
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (index);
	}
	else
	{
		return (-1);
	}
}

int	main(void)
{
    printf("-10 = %d (-1)\n", ft_fibonacci(-10));
    printf(" 3 = %d \n", ft_fibonacci(3));
    printf(" 7 = %d \n", ft_fibonacci(7));
    printf(" 0 = %d (0)\n", ft_fibonacci(0));
}
