# FT_ITOA

---

## SYNOPSIS

```c
#include <libft.h>

char *ft_itoa(int n);
```

---

## DESCRIPTION

Utilizando malloc(3), genera una string que represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.

---

## PARAMETERS

n: el entero a convertir.

---

## RETURN VALUES

La string que represente el número.
NULL si falla la reserva de memoria.

---

## AUTHORIZED FUNCTIONS

malloc