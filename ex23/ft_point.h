/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 20:01:18 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/27 18:02:46 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

struct s_point
{
	int	x;
	int	y;
};

typedef struct s_point	t_point;

void	set_point(t_point *point);

#endif
