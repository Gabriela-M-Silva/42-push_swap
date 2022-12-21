/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:34:04 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/12 06:55:31 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*aux_dest;
	unsigned char	*aux_src;

	aux_dest = (unsigned char *)dest;
	aux_src = (unsigned char *)src;
	if (aux_dest > aux_src)
	{
		aux_src += n - 1;
		aux_dest += n - 1;
		while (n--)
		{
			*aux_dest = *aux_src;
			aux_src--;
			aux_dest--;
		}
	}
	else
		*aux_dest = *(unsigned char *)ft_memcpy(dest, src, n);
	return (dest);
}
