/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:54:46 by ffons-ti          #+#    #+#             */
/*   Updated: 2023/03/31 12:25:41 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Checks if a file is accesible and returns 1
if it is and 0 if it isn't.
*/
int	ft_check_fd(char *str)
{
	int	fd;

	fd = open(str, O_RDONLY);
	if (fd < 0)
	{
		close (fd);
		return (0);
	}
	close (fd);
	return (1);
}
