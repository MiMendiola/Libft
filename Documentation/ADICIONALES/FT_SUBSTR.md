# FT_SUBSTR

---

## SYNOPSIS

```c
#include <libft.h>

char *ft_substr(char const *s, unsigned int start, size_t len);
```

---

## DESCRIPTION

Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’.

---

## PARAMETERS

s: La string desde la que crear la substring. start: El índice del caracter en ’s’ desde el que empezar la substring.
len: La longitud máxima de la substring.

---

## RETURN VALUES

La substring resultante.
NULL si falla la reserva de memoria.

---

## AUTHORIZED FUNCTIONS

malloc