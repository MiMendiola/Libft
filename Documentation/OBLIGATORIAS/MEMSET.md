# MEMSET

---

## SYNOPSIS

```c
#include <string.h>

void *memset(void *b, int c, size_t len);
```

---

## DESCRIPTION

The `memset()` function writes len bytes of value c (converted to an unsigned char) to the string b. That means it completes the len of the array with the character you say.

---

## RETURN VALUES

The `memset()` function returns its first argument.