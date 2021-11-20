/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 17:54:04 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/17 21:14:26 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		var;
	int		j;
	char	*cpy;

	if (s == NULL)
		return (NULL);
	i = 0;
	var = ft_strlen((char *)s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	cpy = (char *)malloc(var - i + 1);
	if (cpy == NULL)
		return (NULL);
	while (s[var] == ' ' || s[var] == '\n' || s[var] == '\t')
		var--;
	j = 0;
	while (i <= var)
	{
		cpy[j] = s[i];
		i++;
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
