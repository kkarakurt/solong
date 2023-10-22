/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_count_checker.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 23:13:23 by kkarakur          #+#    #+#             */
/*   Updated: 2023/10/18 16:45:28 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	argument_count_checker(int argc)
{
	if (argc < 2)
	{
		write(2, "Too less arguments.\n", 21);
		exit(1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		exit(1);
	}
}
