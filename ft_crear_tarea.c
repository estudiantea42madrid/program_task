#include "task.h"
#include "libft.h"

t_task *ft_crear_tarea(char *descripcion, int id)
{
    t_task  *nueva_tarea;

    nueva_tarea = malloc(sizeof(t_task));
    if (!nueva_tarea)
        return (NULL);
    nueva_tarea->id = id; 
    nueva_tarea->descripcion = descripcion;
    nueva_tarea->estado = 0;    
    return (nueva_tarea);
}
