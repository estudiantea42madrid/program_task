#include "task.h"

int	ft_completar_tarea(t_list *lista, int id)
{
	t_list	*aux;
	t_task	*datos;

	aux = lista;
	if (!lista)
		return (0);
	while (aux != NULL )
	{
		datos = (t_task *)aux->content;
		if (datos->id == id)
		{
			if (datos->estado == 1)
				return (1);
			datos->estado = 1;
			return (1);
		}
		aux = aux->next;
	}
	return (0);
}
