/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:34:49 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:34:51 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int	nb)
{
	long int	i;
	long int	a;

	i = 1;
	a = nb;
	if (a < 0)
		return (0);
	while (i * i < a)
		i++;
	if (a == i * i)
		return (i);
	return (0);
}