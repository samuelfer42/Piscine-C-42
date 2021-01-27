/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:23:10 by safernan          #+#    #+#             */
/*   Updated: 2019/06/16 13:27:06 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
