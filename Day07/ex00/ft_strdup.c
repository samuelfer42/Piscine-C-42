/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 08:45:03 by sfernand          #+#    #+#             */
/*   Updated: 2018/09/14 10:30:01 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		count;
	char	*new;

	new = NULL;
	count = 0;
	if (new == NULL)
		return (NULL);
	while (src[count] != '\0')
	{
		count++;
	}
	new = malloc(sizeof(*src) * (count + 1));
	count = 0;
	while (src[count] != '\0')
	{
		src[count] = new[count];
		count++;
	}
	new[count] = '\0';
	return (0);
}
