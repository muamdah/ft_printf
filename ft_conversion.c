/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:22:54 by muamdah           #+#    #+#             */
/*   Updated: 2018/04/26 15:09:27 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"

char *ft_conv_d(char *str, t_format *f)
{
	int i;
	int j;
	char *s;

	i = 0;
	s = ft_strnew(1);
	while (str[i] != '%')
		i++;
	j = i;
	while (!(ft_strchr("d", str[j])))
		j++;
	s = ft_strsub(str, i, j - i);
	printf("%s\n", ft_strsub(str, i , j - i + 1));
	return (s);
}
