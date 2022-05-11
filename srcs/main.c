/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:32:03 by nlafarge          #+#    #+#             */
/*   Updated: 2022/05/11 18:40:21 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

int	main(int argc, char **argv, char **env)
{
	t_env_var	env_var;

	(void)argc;
	(void)argv;
	env_var = ft_get_env_var(env, "PATH");
	if (!env_var.key)
		exit(EXIT_FAILURE);
	ft_print_env_var(&env_var);
	ft_clean_env_var(&env_var);
	return (1);
}