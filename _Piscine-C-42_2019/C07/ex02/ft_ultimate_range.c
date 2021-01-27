/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:23:32 by safernan          #+#    #+#             */
/*   Updated: 2019/06/16 13:59:10 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	*range = NULL;
	i = -1;
	if (min >= max)
		return (0);
	if ((*range = (int*)malloc(sizeof(int) * (max - min))) == NULL)
		return (0);
	while (++i < (max - min))
		(*range)[i] = i + min;
	return (i);
}
