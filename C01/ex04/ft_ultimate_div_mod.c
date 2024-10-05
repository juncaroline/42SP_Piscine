/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:04:05 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/08/20 18:43:49 by cabo-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	rest;

	if (*b != 0)
	{
		result = *a / *b;
		rest = *a % *b;
		*a = result;
		*b = rest;
	}
}

/*#include <stdio.h>

int	main( void )
{
	int	a;
	int	b;

	a = 17;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf ("O resultado é: %d.\n", a);
	printf ("O resto é: %d.\n", b);
	return (0);
}*/
