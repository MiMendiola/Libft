# MEMMOVE

---

## SYNOPSIS

```c
#include <string.h>

void *memmove(void *dst, const void *src, size_t len);
```

---

## DESCRIPTION

The `memmove()` function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.

You should take car about the overlaping and copy from the other point of src.

---

## RETURN VALUES

The `memmove()` function returns the original value of dst.