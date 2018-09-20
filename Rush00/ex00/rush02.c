/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_v0.1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:53:40 by gchuinar          #+#    #+#             */
/*   Updated: 2018/09/02 11:41:27 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_jegal_0(int i, int x)
{
	if (i > 1 && i < x)
		ft_putchar('B');
	else
		ft_putchar('A');
}

void	ft_jegal_y(int i, int x)
{
	if (i > 1 && i < x)
		ft_putchar('B');
	else
		ft_putchar('C');
}

void	ft_jbetween(int i, int x)
{
	if (i > 1 && i < x)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			i = 1;
			while (i <= x)
			{
				if (j == 1)
					ft_jegal_0(i, x);
				else if (j == y)
					ft_jegal_y(i, x);
				else
					ft_jbetween(i, x);
				i++;
			}
			j++;
			ft_putchar('\n');
		}
	}
}
