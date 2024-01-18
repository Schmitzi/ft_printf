/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:43:08 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/12/02 15:47:21 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>
# include <string.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putdec(int nb);
int		ft_puthex_l(int nb);
int		ft_puthex_s(int nb);
int		ft_putptr(void *ptr);
int		ft_putstr(const char *str);
int		ft_putundec(unsigned int nb);

#endif	
