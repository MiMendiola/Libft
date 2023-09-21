/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:59:55 by mmendiol          #+#    #+#             */
/*   Updated: 2023/07/25 13:33:44 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*nstr;
	int		i;

	i = 0;
	nstr = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!nstr)
	{
		return ((void *)0);
	}
	while (src[i])
	{
		nstr[i] = src[i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src = "hola mundo";

	printf("%s", ft_strdup(src));
	return (0);
}*/