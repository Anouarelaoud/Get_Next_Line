/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:25:10 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/14 19:36:57 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (pt1[i] != pt2[i])
			return ((pt1[i] - pt2[i]));
		i++;
	}
	return (0);
}
