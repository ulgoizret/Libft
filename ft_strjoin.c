/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterziog <nterziog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:30:25 by nterziog          #+#    #+#             */
/*   Updated: 2022/11/29 13:02:05 by nterziog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newchain;
	size_t	size1;
	size_t	size2;

	if (!s1 || !s2)
		return (NULL);
	newchain = (char *)malloc (sizeof(char) * \
				(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newchain)
		return (NULL);
	size1 = 0;
	while (s1[size1] != '\0')
	{
		newchain[size1] = s1[size1];
		size1++;
	}
	size2 = 0;
	while (s2[size2] != '\0')
		newchain[size1++] = s2[size2++];
	newchain[size1] = '\0';
	return (newchain);
}
