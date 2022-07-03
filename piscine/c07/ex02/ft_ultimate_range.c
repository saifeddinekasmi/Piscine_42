/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:35:54 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:35:56 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	len;
	int	i;
	int	*tab;

	len = max - min;
	if (min >= max)
	{
		return (0);
	}
	tab = (int *) malloc(len * sizeof(int));
	if (!tab)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (len);
}
