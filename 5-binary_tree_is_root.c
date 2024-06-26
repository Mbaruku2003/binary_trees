#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: a pointer to the node to check
 * Return: 1 if node is a root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	/** roots parent pointer is always NULL **/
	return (node->parent == NULL);
}
