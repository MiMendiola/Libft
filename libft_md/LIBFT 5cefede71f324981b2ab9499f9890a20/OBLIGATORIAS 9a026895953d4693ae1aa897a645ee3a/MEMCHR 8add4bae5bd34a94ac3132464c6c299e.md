# MEMCHR

---

## SYNOPSIS

```c
#include <string.h>

void *memchr(const void *s, int c, size_t n);
```

---

## DESCRIPTION

The `memchr()` function locates the first occurrence of c (converted to an unsigned char) in string s.

---

## RETURN VALUES

The `memchr()` function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.