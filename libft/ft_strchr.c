/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:36:06 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/20 08:35:03 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*aux_str;

	aux_str = (char *)str;
	while (*aux_str)
	{
		if (*aux_str == (char)c)
			return (aux_str);
		aux_str++;
	}
	if (c == '\0')
		return (aux_str);
	return (NULL);
}
