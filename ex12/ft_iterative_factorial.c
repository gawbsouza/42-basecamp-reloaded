/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:58:07 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/05 19:32:00 by gasouza          ###   ########.fr       */
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
