# ISPRINT

---

## SYNOPSIS

```c
#include <ctype.h>

int isprint(int c);
```

---

## DESCRIPTION

The `isprint()` function tests for any printing character, including space (` ').  The value of the argument must be representable as an unsigned char or the value of EOF.

They are from 32 - 126

---

## RETURN VALUES

The `isprint()` function returns zero if the character tests false and returns non-zero if the character tests true.

False = 0

True = 1