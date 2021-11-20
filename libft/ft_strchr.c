/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:49:00 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/11 15:13:09 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*pt;

	i = 0;
	pt = (char *)s;
	while (pt[i])
	{
		if (pt[i] == (char)c)
			return (&pt[i]);
		i++;
	}
	if (pt[i] == (char)c)
		return (&pt[i]);
	return (NULL);
}
