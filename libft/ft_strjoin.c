/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:36:50 by gde-mora          #+#    #+#             */
/*   Updated: 2022/11/22 22:59:08 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	size_nstr;

	size_nstr = ft_strlen(s1) + ft_strlen(s2);
	nstr = (char *)malloc(sizeof(char) * (size_nstr + 1));
	if (!nstr)
		return (NULL);
	ft_strlcpy(nstr, s1, ft_strlen(s1) + 1);
	ft_strlcat(nstr, s2, size_nstr + 1);
	return (nstr);
}
