# BONUS

Si completas la parte obligatoria, no dudes en llevarla más lejos haciendo esta parte extra. Te dará puntos adicionales si la completas correctamente.
Las funciones para manipular memoria y strings son muy útiles... Pero pronto descubrirás que la manipulación de listas lo es incluso más.

Deberás utilizar la siguiente estructura para representar un nodo de tu lista. Añade la declaración a tu archivo libft.h:

```c
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
```

Los miembros de la estructura t_list son:
    • content: la información contenida por el nodo.
void *: permite guardar cualquier tipo de información.
    • next: la dirección del siguiente nodo, o NULL si el siguiente nodo es el último.
En tu Makefile, añade una regla make bonus que incorpore las funciones bonus a tu libft.a.

[FT_LSTNEW](../Documentation/BONUS/FT_LSTNEW.md)

[FT_LSTADD_FRONT](../Documentation/BONUS/FT_LSTADD_FRONT.md)

[FT_LSTSIZE](../Documentation/BONUS/FT_LSTSIZE.md)

[FT_LSTLAST](../Documentation/BONUS/FT_LSTLAST.md)

[FT_LSTADD_BACK](../Documentation/BONUS/FT_LSTADD_BACK.md)

[FT_LSTDELONE](../Documentation/BONUS/FT_LSTDELONE.md)

[FT_LSTCLEAR](../Documentation/BONUS/FT_LSTCLEAR.md)

[FT_LSTITER](../Documentation/BONUS/FT_LSTITER.md)

[FT_LSTMAP](../Documentation/BONUS/FT_LSTMAP.md)