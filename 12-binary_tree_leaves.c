#include <stdlib.h>
#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the pointer to the root node of the tree
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	return (left_leaves + right_leaves);
}
