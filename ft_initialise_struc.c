/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialise_struc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:29:30 by muamdah           #+#    #+#             */
/*   Updated: 2018/04/26 16:10:47 by muamdah          ###   ########.fr       */
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
int		ft_recupint(char *str, int *j)
{
	int		a;
	int		i;
	char	*tmp;

	a = 0;
	i = *j;
	tmp = ft_strnew(0);
	if (str[i] == '.')
		i++;
	while (ft_strchr("1234567890", str[i]))
		tmp[a++] = str[i++];
	a = ft_atoi(ft_strdup(tmp));
	*j = i;
	free(tmp);
	return(a);
}

void    ft_struct_complet(char *str, t_format *f)
{
	int		i;
	int		a;
	char	*tmp;

	i = 0;
	a = 0;
	tmp = ft_strnew(a);
	f->len = ft_strlen(str);
	while(str[i++] != '%')
		i++;
	while (ft_strchr("-+0 #", str[i]))
		tmp[a++] = str[i++];
	f->option = ft_strdup(tmp);
	free(tmp);
	f->lm = ft_recupint(str, &i);
	f->precision = ft_recupint(str, &i);
	tmp = ft_strnew(a);
	a = 0;
	while (ft_strchr("hlL", str[i]))
		tmp[a++] = str[i++];
	f->taille = ft_strdup(tmp);
	free(tmp);
	if (ft_strchr("idDfeEgGcuxXs", str[i]))
		f->conv = str[i];
}
