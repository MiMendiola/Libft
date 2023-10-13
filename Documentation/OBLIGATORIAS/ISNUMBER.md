# ISNUMBER

---

## SYNOPSIS

```c
#include <ctype.h>

int isnumber(int c);
```

---

## DESCRIPTION

The `isnumber()` function behaves similarly to `isdigit()`, but may recognize additional characters, depending on the current locale setting.

The value of the argument must be representable as an unsigned char or the value of EOF.

---

## RETURN VALUES

The `isnumber()` functions return zero if the character tests false and return non-zero if
the character tests true.

False = 0

True = 1