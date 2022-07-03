/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:34:20 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:34:21 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int	nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	else
	{
		nb *= ft_recursive_factorial(nb - 1);
		return (nb);
	}
}
