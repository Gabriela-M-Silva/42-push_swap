/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format_hex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:02:01 by gde-mora          #+#    #+#             */
/*   Updated: 2022/09/06 02:14:46 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printf_lower_x(unsigned long int num)
{
	char	*str;
	int		len;

	str = ft_itoa_hex(num);
	len = 0;
	while (str[len])
	{
		str[len] = ft_tolower(str[len]);
		len++;
	}
	ft_printf_s(str);
	free(str);
	return (len);
}

int	ft_printf_upper_x(unsigned long int num)
{
	char	*str;
	int		len;

	str = ft_itoa_hex(num);
	len = 0;
	while (str[len])
	{
		str[len] = ft_toupper(str[len]);
		len++;
	}
	ft_printf_s(str);
	free(str);
	return (len);
}

int	ft_printf_p(unsigned long int num)
{
	int	len;

	if (num == 0)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x");
	len += ft_printf_lower_x(num);
	return (len);
}
