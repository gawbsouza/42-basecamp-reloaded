/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:29:25 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/24 20:33:38 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>
// int main(void)
// {
// 	int val1 = 30;
// 	int val2 = -89;
// 	printf("val1: %d, val2: %d\n", val1, val2);
// 	ft_swap(&val1, &val2);
// 	printf("val1: %d, val2: %d\n", val1, val2);
// }