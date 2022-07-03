/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:35:49 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:35:50 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*copy;
	int	len;
	int	i;

	len = max - min;
	copy = (int *) malloc(len * sizeof(int));
	if (min >= max)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		copy[i] = min;
		i++;
		min++;
	}
	return (copy);
}
