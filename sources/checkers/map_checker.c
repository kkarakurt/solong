/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:39:06 by kkarakur          #+#    #+#             */
/*   Updated: 2023/10/18 16:39:54 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "checkers.h"
#include <stdlib.h>

void	map_checker(char **argv, t_map *map)
{
	int		len;

	map->ber = argv[1];
	len = (int)ft_strlen(argv[1]) - 4;
	if (argv[1][len] != '.' || argv[1][len + 1] != 'b'
	|| argv[1][len + 2] != 'e' || argv[1][len + 3] != 'r' || len <= 0)
		{write (1, "Not ber file!\n", 15);
	exit(0);
}}
