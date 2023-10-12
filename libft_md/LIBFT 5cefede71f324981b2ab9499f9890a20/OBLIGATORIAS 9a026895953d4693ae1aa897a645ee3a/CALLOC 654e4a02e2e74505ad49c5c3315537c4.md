# CALLOC

---

## SYNOPSIS

```c
#include <stdlib.h>

void *calloc(size_t count, size_t size);
```

---

## DESCRIPTION

The `calloc()` function contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.

---

## RETURN VALUES

If successful, `calloc()` functions return a pointer to allocated memory.  If there is an error, they return a NULL pointer and set errno to ENOMEM.