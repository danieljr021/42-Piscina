/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 22:40:48 by dada-con          #+#    #+#             */
/*   Updated: 2024/06/28 19:40:04 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *scr)
{
	int	i;

	i = 0;
	while (scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main()
{
	char	value1[0] = "";
	char	value2[] = "fala ai";
	
	printf("%s", ft_strcpy(value1, value2));
}*/
