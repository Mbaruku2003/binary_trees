#include "binary_trees.h"
#include <stdlib.h>
/**
 * *binary_tree_insert_left - inserts a node as the left-child
 * @parent: pointer to the node to insert the left child in
 * @value: the value to store in the new node
 * Return: a pointer to the new node else NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/** Check for empty parent or allocation failure. **/
	if (parent == NULL || !binary_tree_node(NULL, value))
	{
		return (NULL);
	}

	/** Create a new node **/
	binary_tree_t *new_node = binary_tree_node(parent, value);

	/** Handle existing left child if any **/
	if (parent->left)
	{
		/**update left childs parent**/
		parent->left->parent = new_node;
		/**new node's left child as old left child**/
		new_node->left = parent->left;
	}
	/**Set parent's left child to the new node**/
	parent->left = new_node;
	return (new_node);
}
