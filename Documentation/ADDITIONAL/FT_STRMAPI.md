# FT_STRMAPI

---

## SYNOPSIS

```c
#include <libft.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

---

## DESCRIPTION

A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y el propio carácter. Genera una nueva string con el resultado del uso sucesivo de ’f’.

---

## PARAMETERS

s: La string que iterar.
f: La función a aplicar sobre cada carácter.

---

## RETURN VALUES

La string creada tras el correcto uso de ’f’ sobre cada carácter.
NULL si falla la reserva de memoria.

---

## AUTHORIZED FUNCTIONS

malloc