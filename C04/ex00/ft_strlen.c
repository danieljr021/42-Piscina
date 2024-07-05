/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 23:01:16 by dada-con          #+#    #+#             */
/*   Updated: 2024/06/30 04:19:00 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int     main(void)
{
        printf("%d",  ft_strlen("daniel"));
        
}*/
