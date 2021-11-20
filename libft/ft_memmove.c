/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 00:10:30 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/17 22:17:49 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*src1;
	char	*dst1;
	size_t	i;

	i = -1;
	src1 = (char *)src;
	dst1 = (char *)dst;
	if (src1 < dst1)
		while ((int)(--n) >= 0)
			*(dst1 + n) = *(src1 + n);
	else
		while (++i < n)
			*(dst1 + i) = *(src1 + i);
	return (dst);
}
