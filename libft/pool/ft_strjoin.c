/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:38:53 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/24 23:01:40 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strlen.c>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlen_caracters(char *str[], int size)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	j = 0;
	cnt = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			cnt++;
			j++;
		}
		i++;
	}
	return (cnt);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	ft_catstrs(char **strs, char *buffer, char *sep, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(buffer + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(buffer + j, sep);
			j += ft_strlen(sep);
		}
		i++;
	}
	buffer[j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*buffer;

	total_len = ft_strlen_caracters(strs, size) + (ft_strlen(sep) * (size - 1));
	buffer = malloc((total_len + 1) * sizeof(char));
	if (!buffer)
	{
		buffer[0] = '\0';
		return (buffer);
	}
	ft_catstrs(strs, buffer, sep, size);
	return (buffer);
}
/*
int	main(void)
{
	char *strings[] = {"Hola", "mundo", "en", "un", "string", "array"};
	char *separator = "-+-";

	char *result = ft_strjoin(6, strings, separator);

	printf("%s\n", result);
	free(result);

	return (0);
}
*/