#include "task.h"

t_task	*ft_buscar_tarea(t_list *lista, int id)
{
	t_list	*buscar;
	t_task	*datos;

	buscar = lista;
	while (buscar != NULL)
	{
		datos = (t_task *)(buscar->content);
		if (datos->id == id)
			return (datos);
		buscar = buscar->next;
	}
	return (0);
}
