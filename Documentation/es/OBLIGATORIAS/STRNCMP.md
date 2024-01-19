# STRNCMP

---

## SYNOPSIS

```c
#include <string.h>

int strncmp(const char *s1, const char *s2, size_t n);
```

---

## DESCRIPTION

The `strncmp()` functions lexicographically compare the null-terminated strings s1 and s2.

The `strncmp()` function compares not more than n characters.  Because `strncmp()` is designed for comparing strings rather than binary data, characters that appear after a `\0' character are not compared.

---

## RETURN VALUES

The `strncmp()` functions return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.  The comparison is done using unsigned characters, so that ‘\200’ is greater than ‘\0'.