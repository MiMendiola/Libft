# BONUS

Si completas la parte obligatoria, no dudes en llevarla más lejos haciendo esta parte extra. Te dará `puntos adicionales` si la completas correctamente.
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
- content: la información contenida por el nodo.
- void *: permite guardar cualquier tipo de información.
- next: la dirección del siguiente nodo, o NULL si el siguiente nodo es el último.
En tu Makefile, añade una regla `make bonus` que incorpore las funciones bonus a tu libft.a.

|[FT_LSTNEW](./FT_LSTNEW.md)|[FT_LSTADD_FRONT](./FT_LSTADD_FRONT.md)|[FT_LSTSIZE](./FT_LSTSIZE.md)
|---|---|---|
|[FT_LSTLAST](./FT_LSTLAST.md)|[FT_LSTADD_BACK](./FT_LSTADD_BACK.md)|[FT_LSTDELONE](./FT_LSTDELONE.md)|
|[FT_LSTCLEAR](./FT_LSTCLEAR.md)|[FT_LSTITER](./FT_LSTITER.md)|[FT_LSTMAP](./FT_LSTMAP.md)|
