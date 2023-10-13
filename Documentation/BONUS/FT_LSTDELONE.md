# FT_LSTDELONE

---

## SYNOPSIS

```c
#include <libft.h>

void ft_lstdelone(t_list *lst, void (*del)(void*));
```

---

## DESCRIPTION

Toma como parámetro un nodo ’lst’ y libera la memoria del contenido utilizando la función ’del’ dada como parámetro, además de liberar el nodo. La memoria de ’next’ no debe liberarse.

---

## PARAMETERS

lst: el nodo a liberar.
del: un puntero a la función utilizada para liberar el contenido del nodo.

---

## RETURN VALUES

Nada

---

## AUTHORIZED FUNCTIONS

free