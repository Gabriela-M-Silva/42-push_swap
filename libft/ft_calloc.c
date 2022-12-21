/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:23:02 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/16 22:47:12 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*arr;
	size_t	result;

	result = num * size;
	if (size != 0 && result / size != num)
		return (NULL);
	if (num == 0 || size == 0)
		return (NULL);
	arr = (void *)malloc(result);
	if (!arr)
		return (NULL);
	ft_bzero(arr, result);
	return (arr);
}
