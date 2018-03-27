#include "./include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
	int re = 0;
	while(begin){
		begin = begin->next;
		re++;
	}
	return re;
}
