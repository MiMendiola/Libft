# FT_LSTCLEAR

---

## SYNOPSIS

```c
#include <libft.h>

void ft_lstclear(t_list **lst, void (*del)(void*));
```

---

## DESCRIPTION

Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo, utilizando la función ’del’ y free(3).
Al final, el puntero a la lista debe ser NULL.

---

## PARAMETERS

lst: la dirección de un puntero a un nodo.
del: un puntero a función utilizado para eliminar el contenido de un nodo.

---

## RETURN VALUES

Nada

---

## AUTHORIZED FUNCTIONS

free