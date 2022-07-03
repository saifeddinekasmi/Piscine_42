/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:34:28 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:34:30 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
