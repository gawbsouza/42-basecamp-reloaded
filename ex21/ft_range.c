/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:23:36 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/05 19:33:44 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	index;

	if (min >= max)
		return (NULL);
	array = (int *) malloc(sizeof(int) * (max - min));
	index = 0;
	while (min < max)
	{
		array[index] = min;
		index++;
		min++;
	}
	return (array);
}
