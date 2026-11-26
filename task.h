#ifndef TASK_H
# define TASK_H

# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <stdio.h> //borrarr

typedef struct s_list
{
		void			*content;
		struct s_list	*next;
}       t_list;

typedef struct s_task
{
		int		id;
		char	*descripcion;
		int		estado;
}		t_task;

int		ft_agregar_tarea(t_list **lista, int id, char *descripcion);
t_list	*ft_crear_nodo_tarea(int id, char *descripcion);
t_task	*ft_buscar_tarea(t_list *lista, int id);
t_task	*ft_crear_tarea(int id, char *descripcion);
int		ft_completar_tarea(t_list *lista, int id);
void	ft_mostrar_tareas(t_list *lista);
int		ft_eliminar_tarea(t_list **lista, int id);
int	main(int argc, char **argv);

#endif