/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:24:39 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:24:41 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcher(char	c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 122;
	while (i >= 97)
	{
		ft_putcher(i);
		i--;
	}
}
