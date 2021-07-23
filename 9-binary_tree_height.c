#include "binary_trees.h"

/**
 * get_height - get absolute height
 * @tree: pointer to the tree
 * Return: Height of the tree
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t l_h;
	size_t r_h;
	size_t max_height;

	if (tree == NULL)
		return (0);

	l_h = get_height(tree->left);
	r_h = get_height(tree->right);
	max_height = (l_h > r_h) ? l_h : r_h;

	return (1 + max_height);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the tree
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (get_height(tree) - 1);
}
