/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:21:28 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/05 19:35:19 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"
#include "ft_putstr.h"

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
