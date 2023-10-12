# FT_STRJOIN

---

## SYNOPSIS

```c
#include <libft.h>

char *ft_strjoin(char const *s1, char const *s2);
```

---

## DESCRIPTION

Reserva (con malloc(3)) y devuelve una nueva string, formada por la concatenación de ’s1’ y ’s2’.

---

## PARAMETERS

s1: La primera string.
s2: La string a añadir a ’s1’.

---

## RETURN VALUES

La nueva string.
NULL si falla la reserva de memoria.

---

## AUTHORIZED FUNCTIONS

malloc