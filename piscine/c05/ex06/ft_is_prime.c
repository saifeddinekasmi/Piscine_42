/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:34:54 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:34:55 by skasmi           ###   ########.fr       */
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
