#include "./include/mylist.h"
#include <stdio.h>
linked_list_t *my_find_node( linked_list_t const *begin , void const *data_ref , int (*cmp) () )
{
	linked_list_t *p = (linked_list_t *)begin;
	while(p){
		if((*cmp)(p->data,data_ref) == 0){
			return p;
		}
		p = p->next;
	}
	return NULL;;
}
