/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:54:05 by ffons-ti          #+#    #+#             */
/*   Updated: 2023/09/19 14:30:19 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr((char *)set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr((char *)set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
void leaks(void)
{
	system("leaks -q a.out");
}
int	main(void)
{
	const char frase[50] = "";
	const char set[3] = "";
	char *result;
	
	atexit(leaks);
	result = ft_strtrim (frase, set);
	printf ("%s", result);
	free(result);
}
*/