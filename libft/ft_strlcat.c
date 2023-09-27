/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:10:31 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/25 21:32:42 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *str, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = ft_strlen(str);
	j = ft_strlen(dest);
	x = 0;
	if (dstsize < j || dstsize == 0)
		return (i + dstsize);
	while (str[x] && j + x < dstsize - 1)
	{
		dest[j + x] = str[x];
		x++;
	}
	dest[j + x] = '\0';
	return (j + i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[50];
	char	src[];
	char	dest2[];
	char	src2[];

	dest[50] = "lorem ipsum dolor sit amet";
	src[] = "hellofri";
	dest2[] = "lorem ipsum dolor sit amet";
	src2[] = "hellofri";
	printf("Mia: %zu %s\n", ft_strlcat(dest,src,15), dest);
	printf("Original: %lu %s\n", strlcat(dest2,src2,15), dest2);
	return (0);
}
*/
