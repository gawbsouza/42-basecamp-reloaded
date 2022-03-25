/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:57:38 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/25 15:12:56 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;
	int	sqrt;

	if (nb <= 0)
		return (0);
	count = 1;
	sqrt = count;
	while (sqrt < nb)
	{
		count++;
		sqrt = count * count;
	}
	if (sqrt == nb)
		return (count);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	int numbers[] = {0, -2, -49, 1, 9, 2, 4, 49, 25, 125};
// 	int size = sizeof(numbers) / sizeof(int);
// 	for(int i = 0; i < size; i++)	
// 		printf("Raiz de %d = %d\n", numbers[i], ft_sqrt(numbers[i]));
// 	return (0);
// }