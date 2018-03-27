#include "./include/mylist.h"
#include <stdio.h>
void my_sort_list ( linked_list_t **begin , int (*cmp) () )
{
	linked_list_t *sort;
	linked_list_t *next;
	void *tmp;
	sort = *begin;
	next = (*begin)->next;
	while(next != NULL){
		if (cmp(sort->data, next->data) > 0){
			tmp = sort->data;
			sort->data = next->data;
			next->data = tmp;
			sort = *begin;
			next = (*begin)->next;
		}
		else{
			sort = sort->next;
			next = next->next;
		}
    }
}
