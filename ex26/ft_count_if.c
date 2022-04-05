/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:51:58 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/05 19:34:42 by gasouza          ###   ########.fr       */
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
