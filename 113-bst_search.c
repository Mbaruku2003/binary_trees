#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: pointer to rootnode of bst match
 * @value: the value to search in the tree
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
	{
		return (NULL);
	}
	if (value == tree->value)
	{
		return ((bst_t *)tree);
	}
	if (value < tree->value)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
