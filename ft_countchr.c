/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:31:26 by ffons-ti          #+#    #+#             */
/*   Updated: 2025/04/20 16:50:37 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Counts the number of instances of a
given character in a string.
*/
int	ft_countchr(char *str, char c)
{
	int	i;
	int	len;
	int	count;

	i = 0;
	len = ft_strlen(str);
	count = 0;
	while (i < len)
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}
