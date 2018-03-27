#include "./include/mylist.h"
#include <stdio.h>

void my_concat_list( linked_list_t **begin1 , linked_list_t *begin2)
{
	linked_list_t *end = *begin1;
	while(end->next){
		end = end->next;
	}
	end->next = begin2;
}
