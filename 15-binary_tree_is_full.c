#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the root node
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	/** chcks if both right child and left child exist **/
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	else if (tree->left == NULL || tree->right == NULL)
	{
		/**only one child or no child not full**/
		return (0);
	}
	/** checks if subtree is fully recursive **/
	return (binary_tree_is_full(tree->left) == binary_tree_is_full(tree->right));
}
