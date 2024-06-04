#include <stddef.h>
#include "binary_trees.h"
#include <stdlib.h>
int binary_tree_is_perfect(const binary_tree_t *tree);
int is_perfect_util(const binary_tree_t *node, int level);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree - a pointer to the root node
 * Return: 0 if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (is_perfect_util(tree, 0));
}
/**
 * is_perfect_util - checks perfect tree property recursively
 * @node: the root node
 * @level: levl as we move down the tree
 * Return: recursive check
 */
int is_perfect_util(const binary_tree_t *node, int level)
{
	if (node == NULL)
	{
		return (level == 1);
	}
	/**check if both right and left child ecist**/
	if (!node->left || !node->right)
	{
		return (0);
	}
	return (is_perfect_util(node->left, level + 1) &&
			is_perfect_util(node->right, level + 1));
}
