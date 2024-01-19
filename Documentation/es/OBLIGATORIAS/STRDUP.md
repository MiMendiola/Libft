# STRDUP

---

## SYNOPSIS

```c
#include <string.h>

char *strdup(const char *s1);
```

---

## DESCRIPTION

The `strdup()` function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used as an argument to the function `free(3)`.

If insufficient memory is available, NULL is returned and errno is set to ENOMEM.

---

## RETURN VALUES

Returns a pointer to the copied string.