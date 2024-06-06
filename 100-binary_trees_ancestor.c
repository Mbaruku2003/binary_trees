#include "binary-trees.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_trees_ancestor -  finds the lowest common ancestor of two nodes
 * @first: a pointer to th first node
 * @second: pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *temp;
	binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);
	*ancestor = (binary_tree_t *)first;
	while (ancestor)
	{
		*temp = second;
		while (temp)
		{
			if (ancestor == temp)
				return (ancestor);
			temp = temp->parent;
		}
		ancestor = ancestor->parent;
	}
	return (NULL);
}
