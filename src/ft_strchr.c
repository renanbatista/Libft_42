/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:35:31 by r-afonso          #+#    #+#             */
/*   Updated: 2023/05/27 18:39:35 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	character;

	character = (unsigned char)c;
	str = (char *)s;
	while (*(str))
	{
		if (*(str) == character)
			return ((char *)str);
		str++;
	}
	if (*(str) == character)
		return ((char *)str);
	return (NULL);
}
