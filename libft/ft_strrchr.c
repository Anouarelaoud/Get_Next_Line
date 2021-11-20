/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:57:47 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/15 20:21:42 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pt;

	pt = (char *)s;
	i = ft_strlen(pt);
	while (i >= 0)
	{
		if (pt[i] == (char)c)
			return (&pt[i]);
		i--;
	}
	return (NULL);
}
