# STRNSTR

---

## SYNOPSIS

```c
#include <string.h>

char *strnstr(const char *haystack, const char *needle, size_t len);
```

---

## DESCRIPTION

The `strnstr()` function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.  Characters that appear after a `\0' character are not searched.  Since the `strnstr()` function is a FreeBSD specific API, it should only be used when portability is not a concern.

---

## RETURN VALUES

If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is
returned; otherwise a pointer to the first character of the first occurrence of needle is returned.