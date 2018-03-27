#include "./include/mylist.h"
#include <unistd.h>
void my_rev_list(linked_list_t **begin)
{
	linked_list_t *list = *begin;
	linked_list_t *temp = NULL;
	while(list->next){
		*begin = list->next;
		list->next = temp;
		temp = list;
		list = *begin;
	}
	list->next = temp;
}
