/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:20:15 by sfernand          #+#    #+#             */
/*   Updated: 2018/09/11 15:12:26 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	z;

	i = 0;
	while (dest[i] != '\0')
		++i;
	z = 0;
	while (src[z] != '\0')
	{
		dest[i] = src[z];
		i++;
		++z;
	}
	dest[i] = '\0';
	return (dest);
}
