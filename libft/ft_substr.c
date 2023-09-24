/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:13:41 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/24 22:59:07 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  maxlen;
    char    *dst;
    
    i = 0;
    maxlen = ft_strlen(s);
    if (start >= maxlen)
		return (ft_strdup(""));
    if (len > maxlen - start)
        len = maxlen - start;
    dst = ft_calloc((len + 1), sizeof(char));
    if (!dst)
        return (0);
    while (len > i && start < maxlen)
    {
        dst[i] = s[start + i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}
/*
int main(void)
{
    char s[] = "hola";
    
    printf("Mio: %s", ft_substr(s,2,30));
    return (0);
}*/