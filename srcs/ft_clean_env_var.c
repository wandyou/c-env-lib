/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_env_var.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:05:42 by nlafarge          #+#    #+#             */
/*   Updated: 2022/04/13 20:15:42 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

void	ft_clean_env_var(t_env_var	*env_var)
{
	if (env_var->key)
		free(env_var->key);
	if (env_var->value)
		free(env_var->value);
}