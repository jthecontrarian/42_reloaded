/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:42:14 by jelau             #+#    #+#             */
/*   Updated: 2026/08/20 22:50:01 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putstr_err(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	buffer[1000];
	ssize_t	data;

	if (argc == 1)
		return (ft_putstr_err("File name missing.\n"), 1);
	if (argc > 2)
		return (ft_putstr_err("Too many arguments.\n"), 1);
	fd = open(argv[1], O_RDONLY);
	data = read(fd, buffer, sizeof(buffer));
	while (data > 0)
	{
		write(1, buffer, data);
		data = read(fd, buffer, sizeof(buffer));
	}
	if (data == -1)
	{
		ft_putstr_err("Cannot read file.\n");
		return (1);
	}
	close(fd);
	return (0);
}
