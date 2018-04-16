/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:56:39 by muamdah           #+#    #+#             */
/*   Updated: 2018/04/02 16:31:51 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

typedef struct s_format
{
    char    *option;
    int     lm;
    int     precision;
    char    *taille;
    char    conv;
    int     len;
}              t_format;

void    initialise_struct(t_format *f);
void    ft_conv(char *str, t_format *f);
int     ft_printf(char *str);
#endif
