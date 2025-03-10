/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:32:29 by dsarmien          #+#    #+#             */
/*   Updated: 2024/09/28 12:35:20 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_intlen(int n)
{
	int	n_len;

	n_len = 0;
	if (n <= 0)
		n_len++;
	while (n)
	{
		n /= 10;
		n_len++;
	}
	return (n_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	n_len;
	long	nb;

	n_len = ft_intlen(n);
	nb = (long)n;
	str = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!str)
		return (NULL);
	str[0] = '0';
	str[n_len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		str[--n_len] = '0' + nb % 10;
		nb /= 10;
	}
	return (str);
}
