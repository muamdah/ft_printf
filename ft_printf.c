/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 16:45:21 by muamdah           #+#    #+#             */
/*   Updated: 2018/04/26 16:11:35 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		ft_printf(char *str)
{
	char *s;

	t_format f;
	ft_struct_complet(str, &f);
	s = ft_conv_d(str, &f);
	return (0);
}
int		main()
{
	ft_printf("bonjour %0-+#12d");
	while(1)
		;
	//printf("% -d\n", 43);
	return (0);
}
