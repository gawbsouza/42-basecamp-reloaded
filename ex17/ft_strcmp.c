/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:28:46 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/25 18:40:05 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("Res: %d\n", ft_strcmp("Gabriel", "Gabriel"));
// 	printf("Res: %d\n", ft_strcmp("Gabriel", "Gaubriel"));
// 	printf("Res: %d\n", ft_strcmp("Gaubriel", "Gabriel"));
// 	printf("Res: %d\n", ft_strcmp("Gabriel", "Ga"));
// 	printf("Res: %d\n", ft_strcmp("Ga", "Gaubriel"));
// 	printf("Res: %d\n", ft_strcmp("", "Gaubriel"));
// 	printf("Res: %d\n", ft_strcmp("", ""));
// 	return (0);
// }