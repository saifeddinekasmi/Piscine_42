/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:28:58 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:29:06 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	givtak;

	i = 0;
	while (i < size - 1)
	{
		givtak = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = givtak;
		i++;
		size--;
	}
}
