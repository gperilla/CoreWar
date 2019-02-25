/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pft_misc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 11:04:36 by brocher           #+#    #+#             */
/*   Updated: 2018/03/16 11:04:37 by brocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		pft_isconv(char c)
{
	if (ft_strchr(STR_CONV, c))
		return (1);
	return (0);
}
