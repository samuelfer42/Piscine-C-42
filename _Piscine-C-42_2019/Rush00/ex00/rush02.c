/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:24:00 by safernan          #+#    #+#             */
/*   Updated: 2019/06/09 14:32:27 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_a_ou_b(int i, int x)
{
	if (i > 1 && i < x)
		ft_putchar('B');
	else
		ft_putchar('A');
}

void	ft_b_ou_c(int i, int x)
{
	if (i > 1 && i < x)
		ft_putchar('B');
	else
		ft_putchar('C');
}

void	ft_milieu(int i, int x)
{
	if (i > 1 && i < x)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rushtest(int x, int y)
{
	int		i;
	int		j;

	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			i = 1;
			while (i <= x)
			{
				if (j == 1)
					ft_a_ou_b(i, x);
				else if (j == y)
					ft_b_ou_c(i, x);
				else
					ft_milieu(i, x);
				i++;
			}
			j++;
			ft_putchar('\n');
		}
	}
}
