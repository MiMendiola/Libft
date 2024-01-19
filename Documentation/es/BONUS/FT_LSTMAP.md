# FT_LSTMAP

---

## SYNOPSIS

```c
#include <libft.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

---

## DESCRIPTION

Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo. Crea una lista resultante de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el contenido de un nodo, si hace falta.

---

## PARAMETERS

lst: un puntero a un nodo.
f: la dirección de un puntero a una función usada en la iteración de cada elemento de la lista.
del: un puntero a función utilizado para eliminar el contenido de un nodo, si es necesario.

---

## RETURN VALUES

La nueva lista.
NULL si falla la reserva de memoria.

---

## AUTHORIZED FUNCTIONS

malloc, free