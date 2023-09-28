/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:12:43 by mmendiol          #+#    #+#             */
/*   Updated: 2023/09/28 22:55:56 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *result;
    t_list  **tmp;
    
    result = NULL;
    if (!lst)
        return (NULL);
    if (!result)
        del(result);
    result = ft_lstnew(f(lst->content));
    tmp = &result;
    while (lst)
    {
        *tmp = result->next;
        ft_lstadd_back(tmp, result);
        lst = lst->next;
    }
    return (result);
}