#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a pointer to the root node
 * Return: NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/**tree is NULL, do nothing.**/
	if (tree == NULL)
	{
		return;
	}

	/** Recursive deletion of subtrees. **/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/**free the current nodes memory**/
	free(tree);
}
