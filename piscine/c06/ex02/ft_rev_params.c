/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:35:24 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:35:26 by skasmi           ###   ########.fr       */
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

int	main(int	argc, char	**argv)
{
	if (argc >= 2)
	{
		while (argv[argc - 1] && argc != 1)
		{
			ft_putstr(argv[argc - 1]);
			ft_putchar('\n');
			argc--;
		}
	}
}
