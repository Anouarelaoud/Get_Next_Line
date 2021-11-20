/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:15:19 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/15 22:20:25 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (*(src + i) != '\0')
		i++;
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}
