/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:20:13 by gasouza           #+#    #+#             */
/*   Updated: 2022/03/31 21:00:00 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_putstr.h"

void	show_argc_errmsg(int argc)
{
	if (argc <= 1)
		ft_putstr("File name missing.\n");
	if (argc > 1)
		ft_putstr("Too many arguments.\n");
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	*file_path;
	char	buffer[1024];
	int		bytes_read;

	if (argc != 2)
	{
		show_argc_errmsg(argc);
		return (0);
	}
	file_path = argv[1];
	fd = open(file_path, O_RDONLY);
	if (fd < 0)
		return (0);
	bytes_read = read(fd, buffer, 100);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, 100);
	}
	close(fd);
	return (0);
}
