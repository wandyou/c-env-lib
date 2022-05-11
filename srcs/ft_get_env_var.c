/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_env_var.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:19:59 by nlafarge          #+#    #+#             */
/*   Updated: 2022/04/13 20:45:34 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

t_env_var	ft_get_env_var(char **env, char *key)
{
	t_env_var	env_var;
	int			i;

	i = 0;
	ft_init_env_var(&env_var);
	while (env[i])
	{
		env_var = ft_parse_env_var(env[i]);
		if (ft_strcmp(env_var.key, key) == 0)
			return (env_var);
		else
		{
			free(env_var.key);
			free(env_var.value);
		}
		i++;
	}
	env_var.key = '\0';
	env_var.value = '\0';
	return (env_var);
}