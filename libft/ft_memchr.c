/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:32:57 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/12 06:15:05 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux_str;

	aux_str = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (aux_str[i] == (unsigned char)c)
			return (&aux_str[i]);
		i++;
	}
	return (NULL);
}
