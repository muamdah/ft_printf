/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 16:45:21 by muamdah           #+#    #+#             */
/*   Updated: 2018/03/28 10:48:52 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		ft_printf(char *str)
{
	t_format f;
	ft_conv(str, &f);
	return (0);
}
int		main()
{
	ft_printf("bonjour %x");
	//printf("% -d\n", 43);
	return (0);
}