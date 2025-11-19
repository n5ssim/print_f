/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n5ssim <nchouaf@student.s19.be>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:18:15 by n5ssim            #+#    #+#             */
/*   Updated: 2025/11/19 15:44:00 by n5ssim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	parse_format(char specifier, va_list *ap);

int	print_char(int c);
int	print_string(char *s);
int	print_pointer(unsigned long ptr);
int	print_decimal(int n);
int	print_unsigned(unsigned int n);
int	print_hex_lower(unsigned int n);
int	print_hex_upper(unsigned int n);
int	print_percent(void);

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned int n);
int	ft_putptr(unsigned long ptr);
int	ft_puthex(unsigned int n, int uppercase);

#endif
