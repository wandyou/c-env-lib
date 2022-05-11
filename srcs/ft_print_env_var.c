/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_env_var.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:33:06 by nlafarge          #+#    #+#             */
/*   Updated: 2022/04/13 17:35:52 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

/*
	Function used to print à env_var struct for debbuging
*/
void	ft_print_env_var(t_env_var	*env_var)
{
	printf("\n");
	printf("[KEY]   = %s\n", env_var->key);
	printf("[VALUE] = %s\n", env_var->value);
	printf("\n");
}