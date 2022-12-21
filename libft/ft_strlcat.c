/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:36:58 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/20 08:26:31 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	result;

	size_dest = ft_strlen(dest);
	if (size_dest > size)
		return (ft_strlen(src) + size);
	result = size_dest + ft_strlen(src);
	while (*src && size_dest + 1 < size)
	{
		dest[size_dest] = *src++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (result);
}
