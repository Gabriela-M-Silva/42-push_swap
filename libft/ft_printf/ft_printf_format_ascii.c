/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format_ascii.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:11:20 by gde-mora          #+#    #+#             */
/*   Updated: 2022/11/30 00:27:22 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printf_c(char c)
{
	return (write(1, &c, 1));
}

int	ft_printf_s(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_printf_d_and_i(int num)
{
	char	*str;
	int		len;

	str = ft_itoa(num);
	len = ft_printf_s(str);
	free(str);
	return (len);
}

int	ft_printf_u(unsigned int num)
{
	char	*str;
	int		len;

	str = ft_itoa_u(num);
	len = ft_printf_s(str);
	free(str);
	return (len);
}
