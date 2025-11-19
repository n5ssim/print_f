/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n5ssim <nchouaf@student.s19.be>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:00:44 by n5ssim            #+#    #+#             */
/*   Updated: 2025/11/19 18:00:15 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_format(char specifier, va_list *ap)
{
	if (specifier == 'c')
		return (print_char(va_arg(*ap, int)));
	if (specifier == 's')
		return (print_string(va_arg(*ap, char *)));
	if (specifier == 'p')
	{
		void	*ptr;
		ptr = va_arg(*ap, void *);
		return (print_pointer((unsigned long)ptr));
	}
	if (specifier == 'd' || specifier == 'i')
		return (print_decimal(va_arg(*ap, int)));
	if (specifier == 'u')
		return (print_unsigned(va_arg(*ap, unsigned int)));
	if (specifier == 'x')
		return (print_hex_lower(va_arg(*ap, unsigned int)));
	if (specifier == 'X')
		return (print_hex_upper(va_arg(*ap, unsigned int)));
	if (specifier == '%')
		return (print_percent());
	return (write(1, &specifier, 1)); 
}
