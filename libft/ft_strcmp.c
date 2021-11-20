/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:37:36 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/13 18:34:34 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	i = 0;
	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	while ((pt1[i] != '\0') || (pt2[i] != '\0'))
	{
		if (pt1[i] != pt2[i])
			return (pt1[i] - pt2[i]);
		i++;
	}
	return (0);
}
