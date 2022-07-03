/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:35:30 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:35:32 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
	}
	return (0);
}

void	ft_swap_char(char	**str1, char	**str2)
{
	char	*swp;

	swp = *str1;
	*str1 = *str2;
	*str2 = swp;
}

int	main(int	argc, char	**argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					ft_swap_char(&argv[i], &argv[j]);
				}
				j++;
			}
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
