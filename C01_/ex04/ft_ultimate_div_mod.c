/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dada-con <dada-con@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 02:02:51 by dada-con          #+#    #+#             */
/*   Updated: 2024/06/22 06:13:22 by dada-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 6;

	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
}*/
