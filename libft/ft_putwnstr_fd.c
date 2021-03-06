/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwnstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 10:44:36 by brocher           #+#    #+#             */
/*   Updated: 2018/03/16 10:44:38 by brocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putwnstr_fd(wchar_t *wstr, size_t n, int fd)
{
	size_t i;
	size_t ret;

	i = 0;
	ret = 0;
	while (wstr[i] && i < n)
		ret += ft_putwchar_fd(wstr[i++], fd);
	return (ret);
}
