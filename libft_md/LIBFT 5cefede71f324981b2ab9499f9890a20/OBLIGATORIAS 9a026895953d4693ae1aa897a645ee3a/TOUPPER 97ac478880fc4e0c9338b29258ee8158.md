# TOUPPER

---

## SYNOPSIS

```c
#include <ctype.h>

int toupper(int c);
```

---

## DESCRIPTION

The `toupper()` function converts a lower-case letter to the corresponding upper-case letter.  The argument must be representable as an unsigned char or the value of EOF.

---

## RETURN VALUES

If the argument is a lower-case letter, the `toupper()` function returns the corresponding upper-case letter if there is one; otherwise, the argument is returned unchanged.