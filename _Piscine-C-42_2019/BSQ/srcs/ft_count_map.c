/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 18:02:21 by safernan          #+#    #+#             */
/*   Updated: 2019/06/25 16:38:12 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_count_map(char *fd)
{
	int		flag;
	int		file;
	int		len;
	char	*str_map;

	flag = 1;
	len = 1;
	file = open(fd, O_RDONLY);
	if (!(str_map = malloc(sizeof(char) * 2)) && file == -1)
		return (ft_put_error(str_map, "erreur d'ouverture"));
	while (flag == 1 && ++len)
		flag = read(file, str_map, 1);
	close(file);
	flag = 0;
	file = 0;
	file = open(fd, O_RDONLY);
	if (!(str_map = malloc(sizeof(char) * len)) && file == -1)
		return (ft_put_error(str_map, "erreur d'ouverture"));
	flag = read(file, str_map, len);
	if (flag == -1)
		return (ft_put_error(str_map, "erreur de lecture"));
	close(file);
	ft_putstr(str_map);
	return (len);
}

void	ft_check_ligne1(int	count)
{
	char	cplein;
	char	cvide;
	char	cobstacle;
	int		nbligne;

	count = 0;
	while (str_map != '/n')
	{
		count++;
	}
	

}
