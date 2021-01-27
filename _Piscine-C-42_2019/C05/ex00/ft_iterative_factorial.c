/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 01:24:23 by safernan          #+#    #+#             */
/*   Updated: 2019/06/11 01:34:37 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		r;

	i = 1;
	r = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		r = i * r;
		i++;
	}
	return (r);
}
