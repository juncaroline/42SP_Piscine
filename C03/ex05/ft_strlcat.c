/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:09:44 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/09/03 17:27:03 by cabo-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destl;
	unsigned int	srcl;

	i = 0;
	destl = 0;
	srcl = 0;
	while (destl < size && dest[destl] != '\0')
		destl++;
	while (src[srcl] != '\0')
		srcl++;
	if (size <= destl)
	{
		return (destl + srcl);
	}
	while (i < (size - destl -1) && src[i] != '\0')
	{
		dest[destl + i] = src[i];
		i++;
	}
	dest[destl + i] = '\0';
	return (destl + srcl);
}
