/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:33:23 by skasmi            #+#    #+#             */
/*   Updated: 2022/07/03 12:33:25 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[j] != '\0')
		j++;
	while (dest[k] != '\0')
		k++;
	if (size <= k)
		j = j + size;
	else
		j = j + k;
	while ((src[i] != '\0') && (k + 1 < size))
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (j);
}
