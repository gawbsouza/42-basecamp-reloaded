/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:54:07 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/29 21:59:34 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;
	int	size;

	count = 0;
	size = 0;
	while (str[count])
	{
		size++;
		count++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		index;

	new = (char *) malloc(ft_strlen(src) * sizeof(char));
	if (new == NULL)
		return (NULL);
	index = 0;
	while (src[index])
	{
		new[index] = src[index];
		index++;
	}
	new[index] = '\0';
	return (new);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char original[] = "Gabriel Souza";
// 	char *copy;
// 	copy = ft_strdup(original);
// 	printf("%s\n", copy);
// 	printf("%p %p\n", original, copy);
// 	return (0);
// }