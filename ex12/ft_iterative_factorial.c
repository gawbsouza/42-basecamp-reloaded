/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:58:07 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/24 21:25:49 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 16)
		return (0);
	factorial = nb;
	while (nb > 1)
	{
		factorial *= --nb;
	}
	return (factorial);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int valores[] = {-14, -2, 0, 1, 5, 10, 16, 17};
// 	int size = sizeof(valores) / sizeof(int);
// 	for (int i = 0; i < size; i++)
// 		printf("%d! = %d\n", valores[i], ft_iterative_factorial(valores[i]));
// 	return (0);	
// }