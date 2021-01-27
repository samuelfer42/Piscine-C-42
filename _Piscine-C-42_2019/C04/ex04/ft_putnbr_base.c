/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 20:26:14 by safernan          #+#    #+#             */
/*   Updated: 2019/06/10 20:37:03 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_base(char *base)
{
	int i;
	int i2;

	i = 0;
	i2 = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i2 = i + 1;
		while (base[i2] != '\0')
		{
			if (base[i] == base[i2])
				return (0);
			i2++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int length;
	int overflow;

	length = 0;
	overflow = 0;
	while (base[length] != '\0')
		length++;
	if (length <= 1 || !ft_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			nbr = 2147483647;
			overflow = 1;
		}
		else
			nbr = -nbr;
	}
	if (nbr >= length)
		ft_putnbr_base(nbr / length, base);
	ft_putchar(base[nbr % length + overflow]);
}
