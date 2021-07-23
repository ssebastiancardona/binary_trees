#include "binary_trees.h"

/**
 * Write a function that checks if a given node is a root
 * @node: node to check
 * Return: 1->is root , 0->otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
