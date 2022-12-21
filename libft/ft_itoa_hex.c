/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:12:09 by gde-mora          #+#    #+#             */
/*   Updated: 2022/07/24 05:07:17 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter_digits_itoa_hex(unsigned long int n)
{
	size_t	counter;

	counter = 1;
	while (n / 16)
	{
		n /= 16;
		counter++;
	}
	return (counter);
}

char	*ft_itoa_hex(unsigned long int n)
{
	char	*str;
	size_t	i;

	i = ft_counter_digits_itoa_hex(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i--)
	{
		if (n % 16 < 10)
			str[i] = (n % 16) + '0';
		else
			str[i] = (n % 16) + 55;
		n /= 16;
	}
	return (str);
}
