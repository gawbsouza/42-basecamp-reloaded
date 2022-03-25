/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:21:28 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/25 15:39:44 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	ft_putstr(char *str)
{
	char	*string;

	string = str;
	while (*string)
	{
		ft_putchar(*string);
		string++;
	}
}

// int	main(void)
// {
// 	ft_putstr("Gabriel\n");
// 	return (0);
// }