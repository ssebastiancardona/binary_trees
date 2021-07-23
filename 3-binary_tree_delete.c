#include "binary_trees.h"
#include <stdlib.h>

/**
 * Write a function that deletes an entire binary tree
 * @tree: root of tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left)
	{
		binary_tree_delete(tree->left);
		tree->left = NULL;
	}
	if (tree->right)
	{
		binary_tree_delete(tree->right);
		tree->right = NULL;
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		tree = NULL;
		return;
	}
}
