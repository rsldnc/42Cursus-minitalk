/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinc <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:29:55 by rdinc             #+#    #+#             */
/*   Updated: 2023/07/18 18:30:06 by rdinc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long ptr);
int	ft_putnbr(int nbr);
int	ft_putnbr_u(unsigned int nbr);
int	ft_puthex(unsigned int nbr, char *base);
int	ft_flags_manager(va_list vl, const char flag);
int	ft_printf(const char *format, ...);

#endif
