/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:37:26 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/16 22:40:44 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_size;

	little_size = ft_strlen(little);
	i = 0;
	if (little_size == 0)
		return ((char *)big);
	while (big[i] && i + little_size <= len)
	{
		if (ft_strncmp(&big[i], little, little_size) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
