/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 15:11:35 by sramos        #+#    #+#                 */
/*   Updated: 2023/11/13 18:04:26 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_write_upperx(unsigned int c);
int	ft_write_lowerx(unsigned int c);
int	ft_write_p(long long c);
int	ft_write_pp(size_t c);
int	ft_write_u(unsigned int c);
int	ft_printf(const char *format, ...);
int	ft_printftwo(const char *format, int i, int count, va_list args);
int	ft_write_c(va_list args, int count);
int	ft_write_s(va_list args, int count);
int	ft_write_di(va_list args);

#endif