# ISDIGIT

---

## SYNOPSIS

```c
#include <ctype.h>

int isdigit(int c);
```

---

## DESCRIPTION

The `isdigit()` function tests for a decimal digit character.  Regardless of locale, this includes the following characters only: 0 - 9.

The value of the argument must be representable as an unsigned char or the value of EOF.

---

## RETURN VALUES

The `isdigit()` functions return zero if the character tests false and return non-zero if
the character tests true.

False = 0

True = 1