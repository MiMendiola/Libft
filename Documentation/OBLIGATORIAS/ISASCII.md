# ISASCII

---

## SYNOPSIS

```c
#include <ctype.h>

int isascii(int c);
```

---

## DESCRIPTION

The `isascii()` function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.

---

## RETURN VALUES

The `isascii()` functions return zero if the character tests false and return non-zero if
the character tests true.

False = 0

True = 1