/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:08:04 by jmousset          #+#    #+#             */
/*   Updated: 2019/05/23 14:30:23 by vrossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_error(char const *s)
{
	int		i;

	i = 0;
	while (s[i])
		ft_putchar_error(s[i++]);
}