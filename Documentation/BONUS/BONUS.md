# BONUS

If you complete the mandatory part, feel free to take it a step further by doing this extra section. You will earn `additional points` if you complete it correctly. 
Functions for manipulating memory and strings are very useful, but soon you'll discover that manipulating lists is even more so.

You should use the following structure to represent a node in your list. Add the declaration to your libft.h file:

```c
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
```

The members of the t_list structure are:
- content: the information contained by the node.
- void *: allows storing any type of information.
- next: the address of the next node, or NULL if the next node is the last one.
In your Makefile, add a rule `make bonus` that incorporates the bonus functions into your libft.a.

|[FT_LSTNEW](./FT_LSTNEW.md)|[FT_LSTADD_FRONT](./FT_LSTADD_FRONT.md)|[FT_LSTSIZE](./FT_LSTSIZE.md)
|---|---|---|
|[FT_LSTLAST](./FT_LSTLAST.md)|[FT_LSTADD_BACK](./FT_LSTADD_BACK.md)|[FT_LSTDELONE](./FT_LSTDELONE.md)|
|[FT_LSTCLEAR](./FT_LSTCLEAR.md)|[FT_LSTITER](./FT_LSTITER.md)|[FT_LSTMAP](./FT_LSTMAP.md)|
