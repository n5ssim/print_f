/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchouaf <nchouaf@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:48:19 by n5ssim            #+#    #+#             */
/*   Updated: 2025/11/19 17:06:09 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				count += write(1, "%", 1);
				i += 2;
				continue;
			}
			i++;
			if (!format[i])
				break;
			count += parse_format(format[i], &ap);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}
