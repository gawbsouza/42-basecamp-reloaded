/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:57:38 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/05 19:32:21 by gasouza          ###   ########.fr       */
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
