/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:57:10 by sfernand          #+#    #+#             */
/*   Updated: 2018/09/17 17:11:26 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_count(char *str)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == 32 || str[i] == 9 || str[i] == 13)
				&& str[i] != '\0')
			i++;
		if (str[i] != 32 && str[i] != 9 && str[i] != 13
				&& str[i] != '\0')
		{
			word++;
			while (str[i] != 32 && str[i] != 9 && str[i] != 13
					&& str[i] != '\0')
				i++;
		}
		while ((str[i] == 32 || str[i] == 9 || str[i] == 13)
				&& str[i] != '\0')
			i++;
	}
	return (word);
}

void	letter_count(char **split, char *str)
{
	int	letter;
	int	word;
	int	i;

	i = 0;
	letter = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == 32 || str[i] == 9 || str[i] == 13)
				&& str[i] != '\0')
			i++;
		while (str[i] != 32 && str[i] != 9 && str[i] != 13
				&& str[i] != '\0')
		{
			letter++;
			i++;
		}
		split[word] = (char *)malloc(sizeof(char) * (letter + 1));
		while ((str[i] == 32 || str[i] == 9 || str[i] == 13)
				&& str[i] != '\0')
			i++;
		letter = 0;
		word++;
	}
}

void	ft_tab_filling(char **split, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (split[i])
	{
		while ((str[k] == 32 || str[k] == 9 || str[k] == 13)
				&& str[k] != '\0')
			k++;
		while (str[k] != 32 && str[k] != 9 && str[k] != 13
				&& str[k] != '\0')
		{
			split[i][j] = str[k];
			j++;
			k++;
		}
		split[i][j] = '\0';
		i++;
		j = 0;
	}
	split[i] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char	**split;
	int		word;

	if (!str)
		return (0);
	word = word_count(str);
	if (!(split = (char **)malloc(sizeof(char *) * (word + 1))))
		return (0);
	split[word] = 0;
	if (word == 0)
	{
		split[0] = 0;
		return (split);
	}
	letter_count(split, str);
	ft_tab_filling(split, str);
	return (split);
}
