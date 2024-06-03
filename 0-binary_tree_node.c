#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node you are creating
 * @value: the value to put in the new node
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/** create a new node by use of struct tag. **/
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/** Check wheather  memory allocation failed. **/
	if (new_node == NULL)
	{
		/** return value should be inside brackets. **/
		return (NULL);
	}
	/** Assign values to the new node**/
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	return (new_node);
}
