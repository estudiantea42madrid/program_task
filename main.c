#include "task.h"
#include "ft_printf.h"
#include "libft.h"


int	main(int argc, char **argv)
{
	t_list	*tarea;
	int		resultado;
	int		id;

	tarea = NULL;
	resultado = ft_agregar_tarea(&tarea, 1, "Terminar ft_printf");
	if (!resultado)
		return (1);
	resultado = ft_agregar_tarea(&tarea, 2, "Estudiar punteros");
	if (!resultado)
	{
		ft_lstclear(&tarea, free);
		return (1);
	}
	resultado = ft_agregar_tarea(&tarea, 3, "Preparar push_swap");
	if (!resultado)
	{
		ft_lstclear(&tarea, free);
		return (1);
	}
		
	if (argc > 1)
	{
		if (ft_strncmp(argv[1], "mostrar", 8) == 0)
			ft_mostrar_tareas(tarea);	
	}

	if (argc == 3)
	{
		if (ft_strncmp(argv[1], "buscar", 7) == 0)
		{
			id = ft_atoi(argv[2]);
			ft_buscar_tarea(tarea, id);
		}
	}
	
	if (argc == 3)
	{
		if (ft_strncmp(argv[1], "completar", 10) == 0)
		{
			id = ft_atoi(argv[2]);
			ft_completar_tarea(tarea, id);
		}
	}

	if (argc == 5)
	{
		if (ft_strncmp(argv[1], "crear", 6) == 0 && ft_strncmp(argv[2], "nodo", 5) == 0)
		{
			id = ft_atoi(argv[4]);
			ft_crear_nodo_tarea(argv[3], id);
		}
	}

	if (argc == 5)
	{
		if (ft_strncmp(argv[1], "crear", 6) == 0 && ft_strncmp(argv[2], "tarea", 6) == 0)
		{
			id = ft_atoi(argv[4]);
			ft_crear_tarea(argv[3], id);
		}
	}

	if (argc == 3)
	{
		if (ft_strncmp(argv[1], "eliminar", 9) == 0)
		{
			id = ft_atoi(argv[2]);
			ft_eliminar_tarea(&tarea, id);
		}
	}

	if (argc == 4)
	{
		if (ft_strncmp(argv[1], "agregar tarea", 14) == 0)
		{
			id = ft_atoi(argv[2]);
			ft_eliminar_tarea(&tarea, id);
		}
	}
	//printf("Comando no reconocido: %s\n", argv[1]);
	/*else
	{
		printf("No se proporcionaron argumentos.\n");
	}
	*/
	ft_eliminar_tarea(&tarea, 2);
	ft_lstclear(&tarea, free);

	return (0);

	return (0);
}