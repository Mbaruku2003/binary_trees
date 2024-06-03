#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - traverses a binary tree using in-order traversal
 * @tree: a pointer to the root node
 * @func: pointer to a function to call for each node
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	/** Recursively traverse left subtree **/
	binary_tree_inorder(tree->left, func);
	/**visit the root node inorder **/
	func(tree->n);
	/** Recursively traverse right subtree **/
	binary_tree_inorder(tree->right, func);
}
