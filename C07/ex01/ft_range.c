/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:38:18 by dada-con          #+#    #+#             */
/*   Updated: 2024/07/04 11:11:02 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int    *ft_range(int min, int max)
{
	int	i;
	int    *result;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	result = (int*) malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;	
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
	}
}
