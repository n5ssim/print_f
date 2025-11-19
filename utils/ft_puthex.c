/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: n5ssim <nchouaf@student.s19.be>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:41:55 by n5ssim            #+#    #+#             */
/*   Updated: 2025/11/18 15:38:03 by n5ssim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_puthex(unsigned int n, int uppercase)
{
	char	*base;
	int		count;

	count = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex(n / 16, uppercase);
	count += write(1, &base[n % 16], 1);
	return (count);
}
