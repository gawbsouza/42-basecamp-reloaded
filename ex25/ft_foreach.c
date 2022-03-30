/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:12:21 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/30 15:49:37 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	index;

	index = 0;
	while (index < length)
	{
		f(tab[index]);
		index++;
	}
}

// #include <stdio.h>
// void	print_nb(int nb)
// {
// 	printf("%d\n", nb);
// }
// int	main(void)
// {
// 	int	numbers[] = {1, 234, 0, 4532, 88, 41, 24};
// 	int	size = sizeof(numbers) / sizeof(int);
// 	ft_foreach(numbers, size, &print_nb);
// 	return (0);
// }