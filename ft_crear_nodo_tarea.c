#include "task.h"
#include "libft.h"

t_list *ft_crear_nodo_tarea(char *descripcion, int id)
{
	t_task	*nueva_tarea;
	t_list	*nuevo_nodo;

	nueva_tarea = ft_crear_tarea(descripcion, id);
	if (!nueva_tarea)
		return (NULL);
	nuevo_nodo = ft_lstnew(nueva_tarea);
	if (!nuevo_nodo)
		free (nueva_tarea);
	return (nuevo_nodo);
}
