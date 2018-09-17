/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 06:09:32 by sfernand          #+#    #+#             */
/*   Updated: 2018/09/05 06:33:13 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	while (nb % i != 0)
	{
		if (i > nb)
			return (0);
		i++;
	}
	if (nb == i)
		return (1);
	else
		return (0);
}
