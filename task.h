#ifndef TASK_H
# define TASK_H

# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

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
t_task	*ft_crear_tarea(int id, char *descripcion);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);

#endif