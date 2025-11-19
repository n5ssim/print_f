/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n5ssim <nchouaf@student.s19.be>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:33:28 by n5ssim            #+#    #+#             */
/*   Updated: 2025/11/18 17:47:25 by n5ssim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putptr_rec(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += putptr_rec(n / 16);
	count += write(1, &base[n % 16], 1);
	return (count);
}

int	ft_putptr(unsigned long ptr)
{
	if (ptr == 0)
		return (write(1, "0", 1));
	return (putptr_rec(ptr));
}
