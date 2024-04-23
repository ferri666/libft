/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:29:07 by ffons-ti          #+#    #+#             */
/*   Updated: 2024/04/23 10:40:14 by ffons-ti         ###   ########.fr       */
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

	if (!s)
		return (s);
	i = 0;
	slen = ft_strlen(s);
	while ((ft_isspace(s[i]) || s[i] == -61) && i < slen)
		i++;
	s[i] = ft_toupper(s[i]);
	i++;
	while (i < slen)
	{
		s[i] = ft_tolower(s[i]);
		i++;
	}
	return (s);
}
