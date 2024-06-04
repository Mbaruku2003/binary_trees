#include <stddef.h>
#include "binary_trees.h"
#include <stdlib.h>
int binary_tree_is_perfect(const binary_tree_t *tree);
int get_height(const binary_tree_t *node);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree - a pointer to the root node
 * Return: 0 if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_is_perfect;
	int right_is_perfect;

	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left || !tree->right)
	{
		return (0);
	}
	left_is_perfect = binary_tree_is_perfect(tree->left);
	right_is_perfect = binary_tree_is_perfect(tree->right);
	/** check for perfect subtree**/
	/**both subtrees must be perfect**/
	/**left node must all be at the same level**/
	return ((left_is_perfect == right_is_perfect) && (get_height(tree->left) == get_height(tree->right)));
}
/**
 * get_height - gets the height of the tree
 * @node: the rot node
 * Return: 0if tree is NULL
 */
int get_height(const binary_tree_t *node)
{
	int max_height;
	int left_height, right_height;

	if (node == NULL)
	{
		return (0);
	}
	left_height = get_height(node->left);
	right_height = get_height(node->right);
	max_height = left_height > right_height ? left_height : right_height;
	return (max_height + 1);
}
