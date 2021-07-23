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

/**
 * binary_tree_leaves - cuenta las hojas en un árbol binario
 * @tree: puntero al nodo raíz del árbol para contar las hojas en
 *
 * Descripción: un puntero NULL no es una hoja
 *
 * Retorno: número de hojas en un árbol binario
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
