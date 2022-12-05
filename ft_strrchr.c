/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterziog <nterziog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:38:32 by nterziog          #+#    #+#             */
/*   Updated: 2022/11/29 13:04:22 by nterziog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	if ((unsigned char)c == '\0')
		return ((char *)str + i);
	while (i-- > 0)
	{
		if (*(str + i) == (unsigned char)c)
			return ((char *)str + i);
	}
	return ((char *) NULL);
}
