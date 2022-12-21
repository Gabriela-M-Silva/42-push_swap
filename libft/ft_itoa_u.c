/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:53:38 by gde-mora          #+#    #+#             */
/*   Updated: 2022/07/24 03:23:57 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter_digits_itoa_u(unsigned int n)
{
	size_t	counter;

	counter = 1;
	while (n / 10)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa_u(unsigned int n)
{
	char	*str;
	size_t	i;

	i = ft_counter_digits_itoa_u(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i--)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
