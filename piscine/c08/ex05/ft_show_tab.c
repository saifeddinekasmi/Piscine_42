/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:36:38 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:36:42 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

void	ft_show_tab(struct s_stock_str	*par)
{
	int	i;

	i = -1;
	while (par[++i].str != '\0')
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
	}
}
/*int	main()
{
	char	*str[]={"yees", "now", "nooo", "13375", 0};
	t_stock_str	*p = ft_strs_to_tab(4,str);
	ft_show_tab(p);
}*/
#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    char    b[10] = "yes ma0";
    char    tr[10] = "yes ma0";
    ft_bzero(b,3);
    bzero(tr,3);
    while(b) i++;
    while(tr) j++:
        printf("mine%s\toriginal%s\t",b,tr);
}
~