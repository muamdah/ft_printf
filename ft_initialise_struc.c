/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialise_struc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:29:30 by muamdah           #+#    #+#             */
/*   Updated: 2018/04/19 12:53:21 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void    initialise_struct(t_format *f)
{
	f->option = NULL;
	f->lm = 0;
	f->precision = 0;
	f->taille = NULL;
	f->conv = 0;
	f->len = 0;
}

void    ft_conv(char *str, t_format *f)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	f->len = j;
	while(str[i] != '%')
		i++;
	i++;
	j = i;
	while (ft_strchr("-+0 #", str[j]))
		j++;
	if (j != i)
		f->option = ft_strsub(str, i, j - i);
	j = i;
	while (ft_strchr("hlL", str[j]))
		j++;
	if (j != i)
		f->taille = ft_strsub(str, i, j - i);
	if (ft_strchr("idDfeEgGcuxXs", str[i]))
		f->conv = str[i];
	printf("%s\n",f->taille);
	printf("%d\n", f->conv);
}
