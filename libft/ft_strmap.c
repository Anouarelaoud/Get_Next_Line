/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:49:27 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/17 21:38:13 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	size = i;
	str = (char *)malloc((size + 1) * sizeof(*str));
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
