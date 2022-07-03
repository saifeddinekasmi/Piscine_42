/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:36:32 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:36:34 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_stdrup(char	*src)
{
	char	*copy;
	int		i;
	int		len;

	len = 0;
	while (src[len])
		len++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	else
	{
		i = 0;
		while (src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}

struct	s_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	t_stock_str	*s_str;
	int			i;

	s_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s_str)
	{
		return (NULL);
	}
	else
	{
		i = -1;
		while (++i < ac)
		{
			s_str[i].size = ft_strlen(av[i]);
			s_str[i].str = av[i];
			s_str[i].copy = ft_stdrup(av[i]);
		}
		s_str[i].str = 0;
		return (s_str);
	}
}
