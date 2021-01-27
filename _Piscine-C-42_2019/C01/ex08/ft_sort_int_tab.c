/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:08:35 by safernan          #+#    #+#             */
/*   Updated: 2019/06/06 15:18:09 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		wall;
	int		pivot;
	int		tmp;

	if (size < 2)
		return ;
	pivot = tab[size - 1];
	wall = 0;
	i = -1;
	while (++i < size)
	{
		if (tab[i] <= pivot)
		{
			if (wall != i)
			{
				tmp = tab[i];
				tab[i] = tab[wall];
				tab[wall] = tmp;
			}
			wall++;
		}
	}
	ft_sort_int_tab(tab, wall - 1);
	ft_sort_int_tab(tab + wall - 1, size - wall + 1);
}
