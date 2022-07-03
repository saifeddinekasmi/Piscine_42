/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:33:46 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:33:48 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	long int	i;

	i = nb;
	if (i < 0 )
	{
		ft_putchar('-');
		i = -1 * i;
	}
	if (i <= 9)
		ft_putchar(i + 48);
	else
	{
		ft_putnbr(i / 10 );
		ft_putnbr(i % 10);
	}
}
