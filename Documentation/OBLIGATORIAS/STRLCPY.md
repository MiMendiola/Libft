# STRLCPY

---

## SYNOPSIS

```c
#include <string.h>

size_t strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
```

---

## DESCRIPTION

The `strlcpy()` functions copy and concatenate strings with the same input parameters and output result as `snprintf(3)`.  They are designed to be safer, more consistent, and less error prone replacements for the easily misused functions `strncpy(3)` and `strncat(3)`.

Take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in dstsize.

`strlcpy()` copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.

If the src and dst strings overlap, the behavior is undefined.

---

## RETURN VALUES

The `strlcpy()` functions return the total length of the string they tried to create.  

That means the length of src.