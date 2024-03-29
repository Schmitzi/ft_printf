/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:43:08 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/09/16 13:10:53 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_conv(int n, int count)
{
	if (n < 10)
	{
		ft_putchar(n + '0');
		count++;
	}
	else
	{
		ft_putchar(n - 10 + 'A');
		count++;
	}
}

int	ft_puthex_l(int nb)
{
	unsigned int	n;
	int				count;

	count = 0;
	if (nb < 0)
	{
		n = (unsigned int)(-1 * nb);
		n = (~n) + 1;
		count++;
	}
	else
	{
		n = (unsigned int)nb;
		count++;
	}
	if (n >= 16)
	{
		count += ft_puthex_l(n / 16);
		n %= 16;
	}
	ft_conv(n, count);
	return (count);
}
/*
int main(void)
{
	int	nb = 21478555;
    ft_puthex_l(nb);
	printf("\n");
	printf("%X\n", nb);
    return (0);
}
*/