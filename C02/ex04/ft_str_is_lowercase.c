/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:33:11 by dada-con          #+#    #+#             */
/*   Updated: 2024/06/26 03:42:14 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	k;
	char a[] = "123";

	k = ft_str_is_lowercase(a);
	printf("%d\n", k);
}*/
