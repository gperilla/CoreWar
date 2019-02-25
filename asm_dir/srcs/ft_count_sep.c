/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_sep.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:33:25 by tmanuel           #+#    #+#             */
/*   Updated: 2018/04/17 11:36:59 by tmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int		ft_count_sep(char *s)
{
	int i;
	int r;

	r = 0;
	if (!s)
		return (r);
	i = 0;
	while (s[i])
	{
		if (s[i] == SEPARATOR_CHAR)
			r++;
		i++;
	}
	return (r);
}
