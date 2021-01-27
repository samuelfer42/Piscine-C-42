/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:56:42 by safernan          #+#    #+#             */
/*   Updated: 2019/06/25 15:57:05 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_put_error(char *leaks, char *error)
{
	if (leaks)
		free(leaks);
	ft_putstr(error);
	return (0);
}
