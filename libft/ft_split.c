/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:15:54 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/27 18:18:18 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sep_finder(char str, char c)
{
	if (str == c)
		return (1);
	return (0);
}

static int	cont_words(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!sep_finder(str[i], c) && (sep_finder(str[i + 1], c)
				|| str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str[i]);
}

static void write_str(char **r, char *str, char c)
{
	int	i;
	int	j;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (sep_finder(str[i], c))
			i++;
		else
		{
			j = 0;
			while (!sep_finder(str[i + j], c) && (str[i + j]))
				j++;
			r[words] = ft_substr(str, i, j);
			if (r[words] == NULL)
				free_str(r);
			i += j;
			words++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**res;

	words = cont_words((char *)s, c);
	if (!s)
		return (NULL);
	res = ft_calloc(words + 1, sizeof(char *));
	if (!res)
		return (NULL);
	write_str(res, (char *)s, c);
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	//char *str = "Hola-mundo-en-un-string-arrayfgddg     -  fdgdfg";
	// char *charset = "-+-";

	// char **split = ft_split(str, charset);

	// int i = 0;
	// while (split[i])
	// {
	// 	printf("%s\n", split[i]);
	// 	i++;
	// }

	// free(split); // Liberamos la memoria asignada
	//printf("%d", cont_words(str, '-'));
	char *str = "  Hola Mundooooo        333  234234   ----++++ 42";
	char **res;
	int	i = 0;

	res = ft_split(str, ' ');
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;

	}
	free(res);
	return (0);
}*/