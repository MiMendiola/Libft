# FT_STRITERI

---

## SYNOPSIS

```c
#include <libft.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*));
```

---

## DESCRIPTION

A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y la dirección del propio carácter, que podrá modificarse si es necesario.

---

## PARAMETERS

s: La string que iterar.
f: La función a aplicar sobre cada carácter.

---

## RETURN VALUES

Nada

---

## AUTHORIZED FUNCTIONS

Ninguna