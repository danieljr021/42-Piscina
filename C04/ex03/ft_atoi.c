/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 02:18:57 by dada-con          #+#    #+#             */
/*   Updated: 2024/06/30 04:08:52 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	res;
	int	e;
	int	i;

	res = 0;
	e = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
		{
			e *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * e);
}

/*int	main(int ac, char **av)
{
	if (ac < 2)
	{
		printf("falta argumento");
	}
	else
	{
		printf("%d\n", ft_atoi(av[1]));
	}
	return (0);
}*/
