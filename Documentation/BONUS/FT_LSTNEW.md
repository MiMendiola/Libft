# FT_LSTNEW

---

## SYNOPSIS

```c
#include <libft.h>

t_list *ft_lstnew(void *content);
```

---

## DESCRIPTION

Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ se inicializa con el contenido del parámetro ’content’. La variable ’next’, con NULL.

---

## PARAMETERS

content: el contenido con el que crear el nodo.

---

## RETURN VALUES

El nuevo nodo.

---

## AUTHORIZED FUNCTIONS

malloc