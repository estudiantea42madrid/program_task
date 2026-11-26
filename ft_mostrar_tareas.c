#include "task.h"
#include "ft_printf.h"

void	ft_mostrar_tareas(t_list *lista)
{
	t_list	*aux;
	t_task	*datos;
	
	aux = lista;
	while (aux != NULL)
	{
		datos = (t_task *)aux->content;
		ft_printf("FT: Id:%d | Descripcion: %s | Estado: %d\n", datos->id, datos->descripcion, datos->estado);
		aux = aux->next;
	}
}
