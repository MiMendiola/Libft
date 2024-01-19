# FT_SPLIT

---

## SYNOPSIS

```c
#include <libft.h>

char **ft_split(char const *s, char c);
```

---

## DESCRIPTION

Reserva (utilizando malloc(3)) un array de strings resultante de separar la string ’s’ en substrings utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.

---

## PARAMETERS

s: La string a separar.
c: El carácter delimitador.

---

## RETURN VALUES

El array de nuevas strings resulatente de la separación.
NULL si falla la reserva de memoria.

---

## AUTHORIZED FUNCTIONS

malloc, free