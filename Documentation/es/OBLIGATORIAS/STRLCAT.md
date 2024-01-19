# STRLCAT

---

## SYNOPSIS

```c
#include <string.h>

size_t strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
```

---

## DESCRIPTION

The `strlcat()` functions copy and concatenate strings with the same input parameters and output result as `snprintf(3)`.  They are designed to be safer, more consistent, and less error prone replacements for the easily misused functions `strncpy(3)` and `strncat(3)`.

Take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in dstsize.

`strlcat()` appends string src to the end of dst.  It will append at most dstsize - `strlen(dst)` - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).

If the src and dst strings overlap, the behavior is undefined.

---

## RETURN VALUES

The `strlcat()` functions return the total length of the string they tried to create.  

That means the initial length of dst plus the length of src.