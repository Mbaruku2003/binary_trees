#include "binary_trees.h"
#include <stdbool.h>
#include <limits.h>
/**
 * is_valid_bst_helper - answers true if it i a bst
 * @node: the node
 * @min_val: the minimum value
 * @max_val maximum value
 * Return: True or false wheather it is abinary st
 */
bool is_valid_bst_helper(const binary_tree_t *node, int min_val, int max_val)
{
	if (node == NULL)
	{
		return (true);
	}
	if (node->n <= min_val || node->n >= max_val)
	{
		return (false);
	}
	return (((is_valid_bst_helper(node->left, min_val, node->n)) &&
				(is_valid_bst_helper(node->right, node->n, max_val))));
}
/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: root node
 * Return: 0 if tree is NULL
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (is_valid_bst_helper(tree, INT_MIN, INT_MAX));
}
