/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:56:39 by muamdah           #+#    #+#             */
/*   Updated: 2018/04/26 15:03:47 by muamdah          ###   ########.fr       */
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
void    ft_struct_complet(char *str, t_format *f);
int     ft_recupint(char *str, int *i);
int     ft_printf(char *str);
char *	ft_conv_d(char *str, t_format *f);
#endif
