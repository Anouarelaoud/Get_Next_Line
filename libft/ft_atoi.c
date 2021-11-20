/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:50:51 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/13 16:54:04 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int valeur;
	int signe;

	i = 0;
	valeur = 0;
	while ((str[i] == '\n') || (str[i] == ' ') || (str[i] == '\t') ||
			(str[i] == '\f') || (str[i] == '\v') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		signe = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((*(str + i) >= '0') && (*(str + i) <= '9'))
	{
		valeur = (valeur * 10) + ((int)*(str + i) - 48);
		i++;
	}
	if (signe == 1)
		return (-valeur);
	return (valeur);
}
