/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:12:25 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/24 20:25:04 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

// #include <unistd.h>
// void	ft_putchar(char letter)
// {
// 	write(0, &letter, 1);
// }
// int main(void)
// {
// 	ft_is_negative(-10);
// 	ft_is_negative(0);
// 	ft_is_negative(14);
// 	return (0);
// }