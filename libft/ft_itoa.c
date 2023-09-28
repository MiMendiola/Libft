/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:38 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/28 19:42:21 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter_nbr(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				size;
	char			*res;

	num = n;
	size = counter_nbr(num);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		num *= -1;
	res = ft_calloc(size + 1, sizeof(char));
	if (!res)
		return (NULL);
	res[size] = '\0';
	while (size > 0)
	{
		res[size - 1] = (num % 10) + '0';
		num /= 10;
		size--;
	}
	if (n < 0)
		res[size] = '-';
	return (res);
}
/*
int	main(void)
{
	int s = -100;

	printf("%s", ft_itoa(s));

	return (0);
}*/