/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:23:22 by safernan          #+#    #+#             */
/*   Updated: 2019/06/16 13:42:26 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tmp;
	int i;

	if (min >= max)
		return (NULL);
	if (max - min > 1)
		max--;
	i = -1;
	tmp = malloc(sizeof(int) * (max - min));
	while (++i <= (max - min))
		tmp[i] = i + min;
	return (tmp);
}
