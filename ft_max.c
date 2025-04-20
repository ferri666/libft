/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:46:49 by ffons-ti          #+#    #+#             */
/*   Updated: 2025/04/20 16:46:49 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *list, unsigned int len)
{
	int				max;
	int				result;
	unsigned int	i;

	if (!list)
		return (-1);
	i = 0;
	result = 0;
	max = list[0];
	while (i < len)
	{
		if (list[i] > max)
		{
			result = i;
			max = list[i];
		}
		i++;
	}
	return (result);
}
