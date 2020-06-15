/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasosa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 20:43:26 by pasosa-s          #+#    #+#             */
/*   Updated: 2020/05/27 18:33:45 by pasosa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabdel(char **tab, int lines)
{
	int		i;

	i = 0;
	while (i < lines)
	{
		ft_memdel((void **)&(tab[i]));
		i++;
	}
	ft_memdel((void **)&(tab));
}
