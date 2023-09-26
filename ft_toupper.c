/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:04:44 by ffons-ti          #+#    #+#             */
/*   Updated: 2023/09/26 14:51:48 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
áéí
óúç
ñàè
ìòù
âêî
ôûä
ëïö
ü
*/
static int	is_special(int c)
{
	if (c == -95 || c == -87 || c == -83
		|| c == -77 || c == -70 || c == -89
		|| c == -79 || c == -96 || c == -88
		|| c == -84 || c == -78 || c == -71
		|| c == -94 || c == -86 || c == -82
		|| c == -76 || c == -69 || c == -92
		|| c == -85 || c == -81 || c == -74
		|| c == -68)
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	if (is_special(c))
		c -= 32;
	return (c);
}
/*
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (i < ft_strlen(argv[1]))
		{
			printf("%d\n", argv[1][i]);
			i++;	
		}
	}
}
*/
