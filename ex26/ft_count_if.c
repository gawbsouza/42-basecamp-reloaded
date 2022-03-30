/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:51:58 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/30 18:29:18 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	pass_count;
	int	index;

	pass_count = 0;
	index = 0;
	while (tab[index])
	{	
		if (f(tab[index]) == 1)
			pass_count++;
		index++;
	}
	return (pass_count);
}

// #include <stdio.h>
// int	start_with_g(char *str)
// {
// 	if(*str == 'G' || *str == 'g')
// 		return (1);
// 	return (0);
// }
// int	main(void)
// {
// 	char *strings[] = {"Gabriel", "Larissa", "Maria", "guilherme", 0};
// 	int	pass = ft_count_if(strings, &start_with_g);
// 	printf("Strings: %d\n", pass);
// 	return (0);
// }