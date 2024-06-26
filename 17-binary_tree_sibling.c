#include <stddef.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find sibling
 * Return: Null if parent or node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
