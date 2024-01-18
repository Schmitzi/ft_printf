/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:23:40 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/26 09:52:47 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		count += 6;
	}
	else
	{
		while (*str)
		{
			count += ft_putchar(*str);
			str++;
		}
	}
	return (count);
}
/*
int	main(void)
{
	char	*str;

	str = "Heinke";
	ft_putstr(str);
	printf("\n");
	printf("%s\n", str);
	return (0);
}
*/