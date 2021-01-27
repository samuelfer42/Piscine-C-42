/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:30:59 by safernan          #+#    #+#             */
/*   Updated: 2019/06/07 15:22:03 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	z;

	i = 0;
	while (dest[i] != '\0')
		i++;
	z = 0;
	while (src[z] != '\0' && z < nb)
	{
		dest[i] = src[z];
		i++;
		z++;
	}
	dest[i] = '\0';
	return (dest);
}
