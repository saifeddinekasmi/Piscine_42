/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:34:59 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:35:01 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int	nb)
{
	int			i;
	long int	root;
	long int	nbr;

	nbr = nb;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	root = 1;
	while (root * root <= nbr)
	{
		if (nbr % i == 0)
		{
			return (0);
		}
		root++;
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int	nb)
{
	if (nb < 0)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
}
