#include "binary_trees.h"

/**
 * Write a function that measures the size of a binary tree
 * @tree: Root node
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (tree == NULL)
		return (0);

	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return (1 + l_size + r_size);
}
