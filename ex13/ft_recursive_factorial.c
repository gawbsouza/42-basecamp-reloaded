/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:27:49 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/29 22:04:03 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 16 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int valores[] = {-14, -2, 0, 1, 5, 10, 16, 17};
// 	int size = sizeof(valores) / sizeof(int);
// 	for (int i = 0; i < size; i++)
// 		printf("%d! = %d\n", valores[i], ft_recursive_factorial(valores[i]));
// 	return (0);	
// }