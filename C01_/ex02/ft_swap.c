/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:44:23 by dada-con          #+#    #+#             */
/*   Updated: 2024/06/24 17:16:39 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int     main(void)
{
        int     num1;
        int     num2;

        num1 = 9;
        num2 = 2;
        ft_swap(&num1,&num2);
        printf("%d", num1);
        printf("%d", num2);
}*/
