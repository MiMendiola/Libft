/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:10:14 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/19 17:40:22 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	i;

	i = 0;
	while (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("Mio: %d\n", ft_toupper('F'));
    printf("Original: %d", toupper('F'));
}
*/
