#include "./include/mylist.h"
#include "./include/my.h"
#include <stdio.h>
#include <stdlib.h>

linked_list_t *create_new_element(const char *av)
{
	linked_list_t *elem = NULL;
	elem = malloc(sizeof(elem));
	if (elem == NULL)
		return NULL;
		elem->data = my_strdup(av);
		elem->next = NULL;
		return (elem);
}
void add_elem_to_list(linked_list_t **list, linked_list_t *elem)
{
	linked_list_t *tmp = *list;
	*list = elem;
	elem->next = tmp;
}
void show_linked_list(linked_list_t *list)
{
	while (list != NULL)
	{
		my_putstr(list->data);
		list = list->next;
    }
}
linked_list_t *my_params_to_list ( int ac , char * const *av )
{
	int i = 0;
	linked_list_t *list= NULL;
	while(i < ac){
		linked_list_t *new = create_new_element(av[i]);
		add_elem_to_list(&list,new);
		i++;
	}
	return list;
}
