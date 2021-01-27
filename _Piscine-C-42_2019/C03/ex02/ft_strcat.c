/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:30:55 by safernan          #+#    #+#             */
/*   Updated: 2019/06/07 13:50:08 by safernan         ###   ########.fr       */
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
