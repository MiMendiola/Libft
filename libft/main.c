/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:34:39 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/24 19:26:44 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	src[] = "^@rrrrr^@^@^@^@^@^@^@^@^@";
	char	dest[20];

	printf("Mia: %zu\n", ft_strlcpy(dest, src, 5));
	printf("Destination: %s\n", dest);
	printf("Original: %lu\n", strlcpy(dest, src, 5));
	printf("Destination: %s\n", dest);
	return (0);
}
