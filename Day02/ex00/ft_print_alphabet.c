/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 08:37:27 by sfernand          #+#    #+#             */
/*   Updated: 2018/09/01 22:55:40 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet (void);

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		ft_putchar(alpha);
		alpha = alpha + 1;
	}
}
