/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 21:04:14 by sfernand          #+#    #+#             */
/*   Updated: 2018/09/07 15:27:07 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	scribe(int hour)
{
	if (hour == 0 || hour == 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("12.00 A.M. AND 1.00 A.M.\n");
	}
	if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("12.00 P.M. AND 1.00 P.M.\n");
	}
}

void	ft_takes_place(int hour)
{
	char	day;
	int		meet;

	day = 'A';
	if (hour >= 0 && hour < 25)
	{
		if (hour >= 1 && hour < 12)
			day = 'A';
		else if (hour >= 13 && hour < 24)
		{
			day = 'P';
			hour = hour - 12;
		}
		meet = hour + 1;
		if (hour != 0 && hour != 24 && hour != 12)
		{
			printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 ", hour);
			printf("%c.M. AND %d.00 %c.M.\n", day, meet, day);
		}
		scribe(hour);
	}
}
