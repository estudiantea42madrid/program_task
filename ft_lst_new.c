#include "task.h"

t_list  *ft_lstnew(void *content)
{
		t_list  *node_0;

		node_0 = malloc(sizeof(t_list));
		if (!node_0)
				return (NULL);
		node_0->content = content;
		node_0->next = NULL;
		return (node_0);
}
