#include "task.h"
#include "ft_printf.h"
#include "libft.h"

int ft_eliminar_tarea(t_list **lista, int id)
{
	t_list	*aux;
	t_list	*nodo_previo;
	t_task	*datos;

	if(lista == NULL)
		return (0);
	aux = *lista;
	nodo_previo = NULL;
	while (aux != NULL)
	{
		datos = (t_task *)aux->content;
		if (datos->id == id)
		{
			if (aux == *lista)
			{
				*lista = aux->next;
				ft_printf("puntero a lista: %p\n", *lista);
			}
			else
			{
				nodo_previo->next = aux->next;
				ft_printf("nodo_previo_puntero: %p\n", nodo_previo);
			}
			ft_lstdelone(aux, free);
			return (1);
		}
		nodo_previo = aux;
		ft_printf("nodo_previo_fuera de if: %p\n", nodo_previo);

		aux = aux->next;
	}
	return (0);	
}
