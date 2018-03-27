#include "./include/mylist.h"
#include <stdlib.h>
int my_delete_nodes ( linked_list_t **begin , void const *data_ref , int (*cmp) ())
{
	linked_list_t *list = *begin;
	linked_list_t *del = list->next;
	while(del){
		if(list != NULL && list == *begin && (*cmp)(list->data,data_ref) == 0){
			*begin = (*begin)->next;
			free(list);
			list = *begin;
			del = list->next;
		}
		else{
			if(del != NULL && (*cmp)(del->data,data_ref) == 0){
					list->next = del->next;
					free(del);
					if(list->next != NULL)
						del = list->next;
					else
						del = list->next;
			}
		}
		if(del != NULL){
			list = del;
			del = list->next;
		}
	}
	return 0;
}
