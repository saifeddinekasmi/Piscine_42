/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:34:34 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:34:35 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int	nb, int	power)
{
	if (power >= 1)
		return (nb *= ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	else
		return (0);
}
