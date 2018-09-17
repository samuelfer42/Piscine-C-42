/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 10:30:24 by sfernand          #+#    #+#             */
/*   Updated: 2018/09/01 16:43:40 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_comb(void);

void	ft_cdu(char c, char d, char u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
}

void	ft_print_comb(void)
{
	char u;
	char d;
	char c;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_cdu(c, d, u);
				if (c != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				u++;
			}
			d++;
		}
		c++;
	}
}
