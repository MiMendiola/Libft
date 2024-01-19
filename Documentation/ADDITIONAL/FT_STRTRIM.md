# FT_STRTRIM

---

## SYNOPSIS

```c
#include <libft.h>

char *ft_strtrim(char const *s1, char const *set);
```

---

## DESCRIPTION

Elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’. La string resultante se devuelve con una reserva de malloc(3).

---

## PARAMETERS

s1: La string que debe ser recortada.
set: Los caracteres a eliminar de la string.

---

## RETURN VALUES

La string recortada.
NULL si falla la reserva de memoria.

---

## AUTHORIZED FUNCTIONS

malloc