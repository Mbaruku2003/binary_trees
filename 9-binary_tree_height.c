#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: if null 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (tree == NULL)
	{
		return (0);
	}
	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);

	return (MAX(right_height, left_height) + 1);
}
