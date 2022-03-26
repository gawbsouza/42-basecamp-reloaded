/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:23:36 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/26 18:40:13 by gasouza          ###   ########.fr       */
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

// #include <stdio.h>
// int	main(void)
// {
// 	int	min = 1032;
// 	int max = 1040;
// 	int *integers = ft_range(min, max);
// 	if (integers == NULL)
// 		return (0);
// 	for (int i = 0; i < (max - min); i++)
// 		printf("%d ", integers[i]);
// 	printf("\n");
// 	return (0);
// }