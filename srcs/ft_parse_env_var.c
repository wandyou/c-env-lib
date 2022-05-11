/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_env_var.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:55:09 by nlafarge          #+#    #+#             */
/*   Updated: 2022/05/11 18:37:44 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

t_env_var	ft_parse_env_var(char* env_str)
{
	t_env_var	env_var;
	int 		i;
	int			env_str_len;
	int			key_len;

	i = 0;
	ft_init_env_var(&env_var);
	env_str_len = ft_strlen(env_str);
	while (env_str[i++])
		if (env_str[i] == '=')
			break;
	key_len = i;
	env_var.key = malloc(key_len + 1);
	if (!env_var.key)
		exit(EXIT_FAILURE);
	env_var.value = malloc(env_str_len - key_len);
	if (!env_var.value)
		exit(EXIT_FAILURE);
	ft_str_range_cpy(env_var.key, env_str, 0, key_len);
	ft_str_range_cpy(env_var.value, env_str, key_len + 1, env_str_len);
	return (env_var);
}