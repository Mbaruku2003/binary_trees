#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - traverses a binary tree using post-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 * Return: NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	/**recursively traverse to the left**/
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	/** visit the root node **/
	func(tree->n);
}
