/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonnel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 07:48:27 by ljonnel-          #+#    #+#             */
/*   Updated: 2018/09/06 07:48:28 by ljonnel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;

	size = 0;
	while (src[size])
		size++;
	if (!(dest = (char*)(malloc(sizeof(char) * (size + 1)))))
		return (NULL);
	dest[size] = '\0';
	while (size >= 0)
	{
		dest[size] = src[size];
		size--;
	}
	return (dest);
}
