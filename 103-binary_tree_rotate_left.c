#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->right)
	{
		return (tree);
	}
	new_root = tree->right;
	/**Update left child of the new root**/
	tree->right = new_root->left;
	/**Update parent of the new root (becomes the current root)**/
	new_root->left = tree;
	return (new_root);
}
