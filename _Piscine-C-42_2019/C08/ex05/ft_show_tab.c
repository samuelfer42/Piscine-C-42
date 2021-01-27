/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 14:52:36 by safernan          #+#    #+#             */
/*   Updated: 2019/06/20 15:11:48 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnb(int size)
{
	int		x;

	x = 1;
	while (size / x > 9)
		x = 10 * x;
	while (x > 0)
	{
		ft_putchar('0' + (size / x) % 10);
		x = x / 10;
	}
	ft_putchar('\n');
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
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	if (par == NULL)
		return ;
	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnb(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
