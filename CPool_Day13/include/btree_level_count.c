#include "./include/btree.h"

size_t btree_level_count ( btree_t const *root )
{
	int left;
	int right;

	if (root == NULL)
		return 0;
	else
	{
		left = btree_level_count(root->left);
		right = btree_level_count(root->right);
		if (left > right)
			return (left + 1);
		else
			return (right + 1);
	}
}
