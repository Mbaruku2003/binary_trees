#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node
 * Return: NULL
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int front = 0, rear = -1;
	binary_tree_t *queue[100], *current;

	if (!tree || !func)
	{
		return;
	}
	queue[++rear] = (binary_tree_t *)tree;
	while (front <= rear)
	{
		*current = queue[front++];
		func(current->n);
		if (current->left)
		{
			queue[++rear] = current->left;
		}
		if (current->right)
		{
			queue[++rear] = current->right;
		}
	}
}
