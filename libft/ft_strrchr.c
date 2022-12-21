/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:37:30 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/10 02:58:36 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	*aux_str;

	len = ft_strlen(s);
	aux_str = (unsigned char *)s + len - 1;
	if ((unsigned char)c == '\0')
		return ((char *)s + len);
	while (len--)
	{
		if (*aux_str == (unsigned char)c)
			return ((char *)aux_str);
		aux_str--;
	}
	return (NULL);
}
