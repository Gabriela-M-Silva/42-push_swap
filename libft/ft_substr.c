/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:37:39 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/20 08:46:59 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size_s;
	size_t	size_max;

	if (!s)
		return (NULL);
	size_s = ft_strlen(s);
	if (size_s < start)
		return (ft_strdup(""));
	if (size_s - start <= len)
		size_max = size_s - start + 1;
	else
		size_max = len + 1;
	sub = (char *)malloc(sizeof(char) * (size_max));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, size_max);
	return (sub);
}
