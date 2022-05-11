/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:27:04 by nlafarge          #+#    #+#             */
/*   Updated: 2022/05/11 18:41:22 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

/*
	Returns 0 if the two strings are the same, otherwise sends back the nb of char diffrence
*/
int		ft_strcmp(char *str1, char *str2)
{
	int	i;
	int len_str1;
	int len_str2;

	len_str1 = ft_strlen(str1);
	len_str2 = ft_strlen(str2);
	if (len_str1 != len_str2)
		return (len_str2 - len_str1);
	i = 0;
	while (str1[i])
	{
		if (str1[i] != str2[i])
			break;
		i++;
	}

	return (len_str1 - i);
}

/*
	Copying of a src string to a dst string but within a range
*/
void	ft_str_range_cpy(char *dst, char *str, int begin, int end)
{
	int	i;

	i = 0;
	while (i < (end - begin))
	{
		dst[i] = str[begin + i];
		i++;
	}
	dst[i] = '\0';
}