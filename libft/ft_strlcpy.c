/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:35:26 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/21 22:09:17 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	if (src == NULL)
		return (0);
	i = 0;
	len = ft_strlen(src);
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "fdgdfg";
	char	dest[20];

	printf("Mia: %zu\n", ft_strlcpy(dest, src, 5));
	printf("Destination: %s\n", dest);
	printf("Original: %lu\n", strlcpy(dest, src, 5));
	printf("Destination: %s\n", dest);
	return (0);
}
*/
