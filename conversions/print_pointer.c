/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n5ssim <nchouaf@student.s19.be>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:36:41 by n5ssim            #+#    #+#             */
/*   Updated: 2025/11/18 16:40:24 by n5ssim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (ptr == 0)
		count += write(1, "0", 1);
	else
		count += ft_putptr(ptr);
	return (count);
}
