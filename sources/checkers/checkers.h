/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:26:21 by kkarakur          #+#    #+#             */
/*   Updated: 2023/10/18 16:43:48 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKERS_H
# define CHECKERS_H

typedef struct s_map
{
	char	*ber;
}		t_map;

void		argument_count_checker(int argc);
void	map_checker(char **argv, t_map *map);

#endif