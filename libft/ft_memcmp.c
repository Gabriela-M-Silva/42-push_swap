/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:33:27 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/10 19:30:53 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*aux_str1;
	unsigned char	*aux_str2;

	aux_str1 = (unsigned char *)str1;
	aux_str2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (aux_str1[i] != aux_str2[i])
			return (aux_str1[i] - aux_str2[i]);
		i++;
	}
	return (0);
}
