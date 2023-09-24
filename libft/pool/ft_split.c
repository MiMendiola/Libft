/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:03:04 by mmendiol          #+#    #+#             */
/*   Updated: 2023/07/27 17:43:57 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	cnt_word(char *str, char *sepa)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (len_separator(str[i + 1], sepa) == 1 && len_separator(str[i],
				sepa) == 0)
			word++;
		i++;
	}
	return (word);
}

void	write_w(char *dest, char *src, char *sep)
{
	int	i;

	i = 0;
	while (len_separator(src[i], sep) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_str(char **split, char *str, char *sep)
{
	int	i;
	int	j;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (len_separator(str[i], sep) == 1)
			i++;
		else
		{
			j = 0;
			while (len_separator(str[i + j], sep) == 0)
				j++;
			split[words] = malloc((j + 1) * sizeof(char));
			write_w(split[words], str + i, sep);
			i += j;
			words++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**resp;
	int		words;

	words = cnt_word(str, charset);
	resp = malloc((words + 1) * sizeof(char *));
	resp[words] = 0;
	write_str(resp, str, charset);
	return (resp);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "Hola-+-mundo-+-en-+-un-+-string-+-array";
	char *charset = "-+-";

	char **split = ft_split(str, charset);

	int i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}

	free(split); // No olvides liberar la memoria asignada

	return (0);
}*/