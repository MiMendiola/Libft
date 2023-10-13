# STRCHR

---

## SYNOPSIS

```c
#include <string.h>

char *strchr(const char *s, int c);
```

---

## DESCRIPTION

The `strchr()` function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is \0 the functions locate the terminating \0.

---

## RETURN VALUES

The functions `strchr()` return a pointer to the located character, or NULL if the character does not appear in the string.