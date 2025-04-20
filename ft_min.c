/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:48:31 by ffons-ti          #+#    #+#             */
/*   Updated: 2025/04/20 16:48:31 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *list, unsigned int len)
{
	int				min;
	int				result;
	unsigned int	i;

	if (!list)
		return (-1);
	i = 0;
	result = 0;
	min = list[0];
	while (i < len)
	{
		if (list[i] < min)
		{
			result = i;
			min = list[i];
		}
		i++;
	}
	return (result);
}
