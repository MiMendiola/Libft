/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:05:21 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/24 23:26:08 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include "ft_calloc.c"
#include "ft_bzero.c"
#include "ft_memset.c"
#include "ft_memcpy.c"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *dst;
    size_t  lenS1;
    size_t  lenS2;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    lenS1 = ft_strlen(s1);
    lenS2 = ft_strlen(s2);
    dst = ft_calloc(lenS1 + lenS2 + 1, sizeof(char));
    if (!dst)
        return (0);
    while (s1[i++])
        ft_memcpy(dst,s1,lenS1);
    while (s2[j++])
        ft_memcpy(lenS1 + dst,s2,lenS2);
    dst[i + j] = '\0';
    return (dst);
}
/*
int main() {
    const char *str1 = "Hello, ";
    const char *str2 = "World!";
    char *result;

    result = ft_strjoin(str1, str2);
    if (result) {
        printf("Resultado de la concatenación: %s\n", result);

       
        free(result);
    } else {
        fprintf(stderr, "La asignación de memoria ha fallado.\n");
        return 1;
    }

    return 0;
}*/