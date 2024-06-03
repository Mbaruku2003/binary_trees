#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent:  a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/** check if memory allocation has failed. **/
	/** check if parent node exists. **/
	if (!parent || !binary_tree_node(NULL, value))
	{
		return (NULL);
	}

	/** create a new node from the existing binary tree structure.**/
	/** to do this we use binary_tree_node(parent, value.**/
	binary_tree_t *new_node = binary_tree_node(parent, value);

	/***Check if parent already has a right child.**/
	if (parent->right)
	{
		/**lect child parent pointer is set t point to new node.**/
		parent->right->parent = new_node;
		/** the new node left child is set to the existing node.**/
		new_node->right = parent->right;
	}
	/**parent node's left child pointer is updated to point to the new**/
	parent->right = new_node;
	return (new_node);
}
