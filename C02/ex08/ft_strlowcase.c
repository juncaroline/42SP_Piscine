/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:44:44 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/08/29 10:35:41 by cabo-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main( void )
{
	char str[] = "HelLO, WoRlD!";

	printf("Original string: %s\n", str);
	ft_strlowcase(str);
	printf("Lowercase string: %s\n", str);

	return (0);
}*/
