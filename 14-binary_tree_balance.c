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
 * binary_tree_height - mide la altura de un árbol binario
 * @tree: puntero al nodo raíz del árbol para medir la altura de
 *
 * Retorno: la altura del árbol. Si el árbol es NULO, devuelve 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_balance: mide el factor de equilibrio de un árbol binario
 * @tree: puntero al nodo raíz del árbol para medir el factor de equilibrio de
 *
 * Descripción: Si el árbol es NULO, devuelve 0
 *
 * Retorno: factor de equilibrio de un árbol binario
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}