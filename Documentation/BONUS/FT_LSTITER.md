# FT_LSTITER

---

## SYNOPSIS

```c
#include <libft.h>

void ft_lstclear(t_list **lst, void (*del)(void*));
```

---

## DESCRIPTION

Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.

---

## PARAMETERS

lst: un puntero al primer nodo.
f: un puntero a la función que utilizará cada nodo.

---

## RETURN VALUES

Nada

---

## AUTHORIZED FUNCTIONS

Ninguna