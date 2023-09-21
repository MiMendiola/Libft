/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:46:44 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/19 17:40:18 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("Mia: %d\n", ft_tolower('z'));
	printf("Original: %d", tolower('z'));
}
*/
