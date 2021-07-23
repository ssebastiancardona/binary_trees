#include "binary_trees.h"

/**
 * Write a function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1=full, 0=not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_subtree, r_subtree;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		l_subtree = binary_tree_is_full(tree->left);
		r_subtree = binary_tree_is_full(tree->right);
		return (l_subtree && r_subtree);
	}

	return (0);
}
