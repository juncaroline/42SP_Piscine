/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:17:03 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/08/20 18:43:28 by cabo-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result;
	int	rest;

	if (b != 0)
	{
		result = a / b;
		rest = a % b;
		*div = result;
		*mod = rest;
	}
}

/*#include <stdio.h>

int	main( void )
{
	int	a;
	int	b;
	int	result;
	int	rest;

	a = 17;
	b = 4;
	ft_div_mod(a, b, &result, &rest);
	printf ("O resultado da divisão é: %d.\n", result);
	printf ("O resto da divisão é: %d.\n", rest);
	return (0);
}*/
