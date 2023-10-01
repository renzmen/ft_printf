/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:00:00 by lrenzett          #+#    #+#             */
/*   Updated: 2023/08/08 19:32:06 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>

int	ft_printf(const char *str, ...);
int	ft_case(va_list arg, char chr);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_puthexa(unsigned long n, char *hex);
int	ft_putuns(unsigned int nbr);
int	ft_putnbr(int nbr);

#endif