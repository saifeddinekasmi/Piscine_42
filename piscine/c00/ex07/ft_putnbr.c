/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:25:19 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:25:22 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0 )
	{
		ft_putchar('-');
		nb = -1 * nb;
	}
	if (nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10 );
		ft_putnbr(nb % 10);
	}
}
