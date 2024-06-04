#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if node is a leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/** Check if  node is NULL **/
	if (node == NULL)
	{
		return (0);
	}

	/** check if both the left node and right node are null. **/
	return (node->left == NULL && node->right == NULL);
}

