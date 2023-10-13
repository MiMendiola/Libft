# ISALPHA

---

## SYNOPSIS

```c
#include <ctype.h>

int isalpha(int c);
```

---

## DESCRIPTION

The `isalpha()` function tests for any character for which `isupper(3)` or `islower(3)` is true. The value of the argument must be representable as an unsigned char or the value of EOF.

In the ASCII character set, this includes the following characters A(65) - Z(90) and a(97) - z(122)

---

## RETURN VALUES

The `isalpha()` function returns zero if the character tests false and returns non-zero if the character tests true.

False = 0

True = 1