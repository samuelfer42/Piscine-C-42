/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 14:34:48 by safernan          #+#    #+#             */
/*   Updated: 2019/06/20 15:03:53 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str	ft_str_to_struct(char *str)
{
	struct s_stock_str	cell;
	int					i;
	char				*cpy;

	if (str == 0)
	{
		cell.str = 0;
		return (cell);
	}
	i = 0;
	while (str[i])
		i++;
	cell.size = 1;
	cell.str = str;
	cpy = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	cell.copy = cpy;
	return (cell);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	i = 0;
	if (ac < 0)
		return (NULL);
	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		tab[i] = ft_str_to_struct(av[i]);
		i++;
	}
	tab[i] = ft_str_to_struct(0);
	return (tab);
}
