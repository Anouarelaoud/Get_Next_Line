/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:13:25 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/17 21:43:09 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_size(int n)
{
	int		size;

	size = (n <= 0) ? 1 : 0;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char					*ft_itoa(int n)
{
	int			size;
	int			sign;
	char		*str;

	sign = (n < 0) ? -1 : 1;
	size = ft_size(n);
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	size--;
	while (size >= 0)
	{
		str[size] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
		size--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
