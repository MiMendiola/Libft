/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:34:39 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/26 16:40:06 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *str = "Hola Mundooooo        333  234234   ----++++ 42";
	char **res;
	int	i = 0;
	
	res = ft_split(str, ' '); 
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
		
	}
	return (0);
}
