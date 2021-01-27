/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 01:34:28 by safernan          #+#    #+#             */
/*   Updated: 2019/06/11 01:37:49 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		stock;

	stock = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb = stock * nb;
		i++;
	}
	return (nb);
}
