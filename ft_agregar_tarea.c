#include "task.h"
#include "libft.h"

int	ft_agregar_tarea(t_list **lista, int id, char *descripcion)
{
	t_list	*nuevo_nodo;

	if (!lista)
		return (0);
	nuevo_nodo = ft_crear_nodo_tarea(id, descripcion);
	if (!nuevo_nodo)
		return (0);
	ft_lstadd_back(lista, nuevo_nodo);
	return (1);
}
