/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rushtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:24:00 by safernan          #+#    #+#             */
/*   Updated: 2019/06/09 14:17:18 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// fonction pour la premiere ligne, savoir si on met un A ou B
void	ft_A_ou_B(int i, int x) 
{
	if (i > 1 && i < x)	
		ft_putchar('B');
	else
		ft_putchar('A');
}

// fonction pour la derniere ligne, savoir si on met un C ou B
void	ft_B_ou_C(int i, int x)
{
	if (i > 1 && i < x)
		ft_putchar('B');
	else
		ft_putchar('C');
}

//fonction pour le milieu, savoir di on met un espace ou un B
void	ft_milieu(int i, int x)
{
	if (i > 1 && i < x)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rushtest(int x, int y)
{
	int	i; 	// i => nombre de colone = x
	int	j;	// j=> nombre de ligne = y

	j = 1;	// on commence a la 1er ligne
	if (x > 0 && y > 0) // si les coordonee sont negatif  
	{
		while (j <= y) 	//tant que j n'est pas a la derniere ligne
		{
			i = 1; 	// on commence a la premier case en haut a gauche
			while (i <= x)	//tant que i n'est pas a la derniere colone 
			{
				if (j == 1)				// si il y a qu'une ligne
					ft_A_ou_B(i, x); 
				else if (j == y) 		// si on est a la derniere ligne
					ft_B_ou_C(i, x);
				else					// si on est au milieu
					ft_milieu(i, x);
				i++;
			}
			j++;
			ft_putchar('\n'); 	// afficher un retour a la ligne
		}
	}
}
