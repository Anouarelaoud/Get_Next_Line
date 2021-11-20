/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:17:55 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/06 23:04:41 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;
	int n;
	int k;

	j = 0;
	i = ft_strlen(dest);
	n = ft_strlen((char *)src);
	k = i + n;
	*(dest + i) = *src;
	while (i < k)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + k) = '\0';
	return (dest);
}
