/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:17:32 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/25 19:54:28 by gasouza          ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	bubble_sort(int size, char *array[])
{
	int		swap;
	int		index;
	char	*temp;

	swap = 1;
	index = 0;
	while (swap)
	{
		swap = 0;
		index = 0;
		while (index + 1 < size)
		{
			if (ft_strcmp(array[index], array[index + 1]) > 0)
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
				swap = 1;
			}
			index++;
		}
	}
}

int	main(int argc, char *argv[])
{
	char	**strings;
	int		index;

	if (argc < 1)
		return (0);
	index = 0;
	strings = ++argv;
	bubble_sort(argc - 1, strings);
	while (index < argc - 1)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
