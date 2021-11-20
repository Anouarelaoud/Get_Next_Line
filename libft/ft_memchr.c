/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:03:20 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/05 21:08:41 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*pt;

	i = 0;
	pt = (char *)s;
	while (i < n)
	{
		if (pt[i] == (char)c)
			return ((void *)&pt[i]);
		i++;
	}
	return (NULL);
}
