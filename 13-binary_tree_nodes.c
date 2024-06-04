#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: a pointer to the root node
 * Return: 0 or NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int has_children = 0;
	size_t left_nodes;
	size_t right_nodes;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		has_children = 1;
	}
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	return (has_children + left_nodes + right_nodes);
}
