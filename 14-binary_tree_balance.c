#include <stddef.h>
#include "binary_trees.h"
#include <stdlib.h>
int binary_tree_balance(const binary_tree_t *tree);
int get_height(const binary_tree_t *node);
/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	/**get the height of right and left subtrees**/
	left_height = get_height(tree->left);
	right_height = get_height(tree->right);
	/** calculate balance factor(left_height - right_height)**/
	return (left_height - right_height);
}
/**
 * get_height - gets the height of the tree
 * @node: the root node
 * Return: max height
 */
int get_height(const binary_tree_t *node)
{
	int left_height;
	int right_height;
	int max_height;

	if (node == NULL)
	{
		return (0);
	}
	left_height = get_height(node->left);
	right_height = get_height(node->right);
	max_height = left_height > right_height ? left_height : right_height;
	return (max_height + 1);
}
