/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:31:18 by safernan          #+#    #+#             */
/*   Updated: 2019/06/23 20:13:45 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*tmp;

	i = 0;
	while (src[i] != '\0')
		i++;
	tmp = (char*)malloc(sizeof(char) * (i + 1));
	while (i >= 0)
	{
		tmp[i] = src[i];
		i--;
	}
	return (tmp);
}


void	ft_check_ligne_1(int fd)
{
	int		nbstock;
	char 	buffer[4 + 1];
	char	Cvide;
	char	nbligne;
	char	Cobstacle;
	char	Cremplir;

	nbstock = read(fd, buffer, 4);

	ft_putstr("Nombre de ligne :  ");
	ft_putchar(buffer[0]);
	ft_putchar('\n');

	ft_putstr("Le caractere vide : ");
	ft_putchar(buffer[1]);
	ft_putchar('\n');

	ft_putstr("Le caractere obstacle : ");
	ft_putchar(buffer[2]);
	ft_putchar('\n');

	ft_putstr("Le caractere a remplir : ");
	ft_putchar(buffer[3]);
	ft_putchar('\n');
}

int		ft_display(int fd)
{
	int		nbstock;
	int		x;
	char	buffer;

	x = 0;
	while (read(fd, &buffer, 1))
	{
		if (buffer == '\n')
			x++;
	}
	ft_putchar('\n');
	ft_putstr("test : ");
	ft_putchar(x);
	ft_putchar('\n');
	return (nbstock);
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
	ft_display(fd);
	close(fd);

	ft_putchar('\n');
	fd = open(av[1], O_RDONLY);
	ft_check_ligne_1(fd);
	close(fd);
	return (0);
}
