#include "task.h"

t_list *ft_crear_nodo_tarea(int id, char *descripcion)
{
	t_task	*nueva_tarea;
	t_list	*nuevo_nodo;

	nueva_tarea = ft_crear_tarea(id, descripcion);
	if (!nueva_tarea)
		return (NULL);
	nuevo_nodo = ft_lstnew(nueva_tarea);
	if (!nuevo_nodo)
		free (nueva_tarea);
	return (nuevo_nodo);
}
