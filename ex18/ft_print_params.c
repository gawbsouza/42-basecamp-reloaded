/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:42:11 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/25 18:50:44 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

int	main(int argc, char *argv[])
{
	int	count;
	int	index;

	if (argc > 1)
	{
		count = 1;
		while (count < argc)
		{
			index = 0;
			while (argv[count][index])
			{
				ft_putchar(argv[count][index]);
				index++;
			}
			ft_putchar('\n');
			count++;
		}
	}
	return (0);
}
