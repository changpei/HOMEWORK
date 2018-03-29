#include "./include/btree.h"

btree_t *btree_create_node ( void *item ) 
{
	btree_t *elem = NULL;
	elem = malloc(sizeof(elem));
	if (elem == NULL)
		return NULL;
	elem->item = item;
	elem->left = NULL;
	elem->right = NULL;
	return elem;
}
