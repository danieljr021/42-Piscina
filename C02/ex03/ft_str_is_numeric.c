/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:32:46 by dada-con          #+#    #+#             */
/*   Updated: 2024/06/26 03:42:44 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
		{
			return (0);
		}
		++i;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int	k;
	char	a[] = "abc";

	k = ft_str_is_numeric(a);
	printf("%d\n", k);
}*/
