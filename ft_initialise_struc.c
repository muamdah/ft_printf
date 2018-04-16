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
    j = 0;
    while (ft_strchr("-+0 #", str[i]))
    {
        f->option[j] = str[i];
        i++;
        j++;
    
    }
    if (ft_strchr(".", str[++i]))
        f->precision = str[i];
    j = 0;
    while (ft_strchr("hlL", str[++i]))
    {
        f->taille[j] = str[i];
        j++;
        i++;
    }
        if (ft_strchr("idDfeEgGcuxXs", str[++i]))
        f->conv = str[i];
    printf("%c", f->conv); 
}