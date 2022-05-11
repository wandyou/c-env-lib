/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:29:32 by nlafarge          #+#    #+#             */
/*   Updated: 2022/05/11 18:29:12 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ENV
# define H_ENV

# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# include <string.h>

/* LIB */
int		ft_strlen(char *str);
int		ft_strcmp(char *str1, char *str2);
void	ft_str_range_cpy(char *dst, char *str, int begin, int end);

typedef	struct s_env_var
{
	char*	key;
	char*	value;
}	t_env_var;

t_env_var	ft_parse_env_var(char* env_str);
t_env_var	ft_get_env_var(char **env, char *key);
void		ft_print_env_var(t_env_var	*env_var);
void		ft_clean_env_var(t_env_var	*env_var);
void		ft_init_env_var(t_env_var *env_var);

#endif