/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 08:08:10 by sfernand          #+#    #+#             */
/*   Updated: 2018/09/18 14:20:11 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

void			ft_show_tab(t_stock_par *par);

t_stock_par		*ft_param_to_tab(int ac, char **av);

void			ft_putchar(char c);

void			ft_putnbr(int nb);

void			ft_print_words_tables(char **tab);

#endif
