#include "binary_trees.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree:  a pointer to the node to measure the depth
 * Return:the depth of the tree and zero if null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	
	/**Recursively count the depth from the parent node**/
	return ((1 + binary_tree_depth(tree->parent)) - 1);
}
