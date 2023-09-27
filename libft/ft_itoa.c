/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:38 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/27 19:26:51 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter_nbr(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	take_nbr(unsigned int n, char *res, int len)
{
	int	i;

	i = 0;
	while (len--)
	{
		n /= 10;
		res[i] = n + '0';
		i++;
	}
}

char	*ft_itoa(int n)
{
}