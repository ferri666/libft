/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:29:07 by ffons-ti          #+#    #+#             */
/*   Updated: 2023/09/26 15:36:18 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Capitalizes the first word of an array of characters.
*/
char	*ft_capword(char *s)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s);
	i = 1;
	if (s[0] != -61)
		s[0] = ft_toupper(s[0]);
	else
	{
		s[1] = ft_toupper(s[1]);
		i++;
	}
	while (i < slen)
	{
		s[i] = ft_tolower(s[i]);
		i++;
	}
	return (s);
}
