/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:44:14 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/21 10:22:01 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if ((d > s) && (s + len > d))
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(d, s, len);
	return (dest);
}
/*
int	main(void)
{
	char	src[];
	char	dest[13];
	char	dest1[13];

	src[] = "Hello World";
	ft_memmove(dest, src, 13);
	memmove(dest1, src, 13);
	printf("Mia: %s\n", dest);
	printf("Orig: %s\n", dest1);
	return (0);
}
*/