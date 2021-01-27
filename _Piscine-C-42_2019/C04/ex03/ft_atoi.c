/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:22:17 by safernan          #+#    #+#             */
/*   Updated: 2019/06/11 14:08:53 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		type(char c)
{
	if (c == 32 || c == '\f' || c == '\t' || c == '\r')
		return (0);
	else if (c == '\n' || c == '\v')
		return (0);
	else if (c == 43)
		return (1);
	else if (c == 45)
		return (2);
	else if (c >= 48 && c <= 57)
		return (3);
	else
		return (4);
}

int		ft_atoi(char *str)
{
	int		a;
	int		c;
	int		s;

	a = 0;
	c = 0;
	s = 0;
	while (str[a] != '\0' && type(str[a]) != 4)
	{
		if (type(str[a]) == 2)
			c++;
		while (type(str[a]) == 3)
		{
			s = s * 10 + (int)(str[a]) - 48;
			a++;
		}
		a++;
	}
	if (c % 2 == 1)
		s = -s;
	return (s);
}
