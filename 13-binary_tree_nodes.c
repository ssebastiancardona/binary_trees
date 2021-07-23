#include "binary_trees.h"

/**
 * Write a function that counts the nodes with at least 1 child in a binary tree
 * @tree: Root node of the tree
 * Return: nodes counted
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left != NULL && tree->right == NULL)
		return (1 + binary_tree_nodes(tree->left));
	else if (tree->left == NULL && tree->right != NULL)
		return (1 + binary_tree_nodes(tree->right));
	else if (tree->left != NULL && tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}
