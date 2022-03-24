/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:38:19 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/24 15:50:16 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

// #include <unistd.h>
// void	ft_putchar(char letter)
// {
// 	write(0, &letter, 1);
// }

// int main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }