/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:18:06 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/05 19:32:37 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
