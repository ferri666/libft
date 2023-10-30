/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alllower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:09:11 by ffons-ti          #+#    #+#             */
/*   Updated: 2023/09/27 17:54:41 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
FUNCTION: ft_alllower
Given an array of characters, it returns the same
array, but with all the alphabetic characters on
lowercase.
*/
char	*ft_alllower(char *s)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s);
	i = 0;
	while (i < slen)
	{
		s[i] = ft_tolower(s[i]);
		i++;
	}
	return (s);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_printf ("%s\n", ft_capword(argv[1]));
	}
}
*/