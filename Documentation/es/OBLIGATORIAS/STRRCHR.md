# STRRCHR

---

## SYNOPSIS

```c
#include <string.h>

char *strrchr(const char *s, int c);
```

---

## DESCRIPTION

The `strrchr()` function is identical to `[strchr()](STRCHR%2066ecfa8f47634df388a761bb76f630dc.md)`, except it locates the last occurrence of c.

---

## RETURN VALUES

The functions `strrchr()` return a pointer to the located character, or NULL if the character does not appear in the string.