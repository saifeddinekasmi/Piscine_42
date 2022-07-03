/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:29:14 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:29:17 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	i;
	int	j;
	int	givtak;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				givtak = tab[i];
				tab[i] = tab[j];
				tab[j] = givtak;
			}
			j++;
		}
		i++;
	}
}
