#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - uses binary tree using pre-order traversal
 * @tree: a pointer to the root node to traverse
 * @func: a pointer to a function to call for each node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	/** go to the root node in preorder**/
	func(tree->n);
	/**Traverse the left subtree recursively**/
	binary_tree_preorder(tree->left, func);
	/**Traverse the right subtree recursively**/
	binary_tree_preorder(tree->right, func);
}
