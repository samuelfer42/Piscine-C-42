/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 01:53:53 by safernan          #+#    #+#             */
/*   Updated: 2019/06/11 01:58:30 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
		{
			return (0);
			i++;
		}
	}
	if (nb == i)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 2;
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}
