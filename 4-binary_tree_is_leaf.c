#include "binary_trees.h"

/**
 * binary_tree_is_leaf - comprueba si un nodo es una hoja
 * @node: puntero al nodo a comprobar
 *
 * Devuelve: 1 si el nodo es una hoja y 0 en caso contrario. Si el nodo es NULO, devuelve 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}