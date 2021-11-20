/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 17:04:33 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/14 19:35:08 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*troncon;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	troncon = (char *)malloc((len + 1) * sizeof(*troncon));
	if (troncon == NULL)
		return (NULL);
	i = 0;
	while ((i < len) && (s[start] != '\0'))
	{
		troncon[i] = s[start];
		i++;
		start++;
	}
	troncon[i] = '\0';
	return (troncon);
}
