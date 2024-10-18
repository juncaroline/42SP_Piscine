/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:13:58 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/08/21 16:13:40 by cabo-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>

int     main( void )
{
        int     a;
        int     b;

        a = 10;
        b = 20;
        ft_swap(&a, &b);
	printf ("O valor de a é: %d.\n", a);
	printf ("O valor de b é: %d.\n", b);
	return (0);
}*/
