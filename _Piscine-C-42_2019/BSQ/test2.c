/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 18:02:21 by safernan          #+#    #+#             */
/*   Updated: 2019/06/23 18:39:17 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_check_ligne_1(int fd)
{
	int		nbstock;
	char 	buffer[BUFF_SIZE + 1];

	nbstock = read(fd, buffer, BUFF_SIZE);
	while(nbstock > 0)
	{
		ft_putchar(buffer[nbstock]);
		nbstock++;
		nbstock = read(fd, buffer, 1);
	}
}


int		main(int ac, char **av)
{
	int		fd;

	if (ac < 2)
	{
		write(2, "Il manque le nom du fichier de la map.\n", 39);
		return (1);
	}
	if (ac > 2)
	{
		write(2, "Trop d'arguments.\n", 18);
		return (1);
	}
	
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Impossible d'ouvrir le fichier.\n", 31);
		return (1);
	}

	ft_check_ligne_1(fd);
	

	close(fd);
	return (0);
}
