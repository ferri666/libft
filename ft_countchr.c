/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:31:26 by ffons-ti          #+#    #+#             */
/*   Updated: 2023/03/13 17:32:35 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			c++;
		i++;
	}
	return (count);
}
