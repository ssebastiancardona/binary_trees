#include "binary_trees.h"

/**
 * binary_tree_preorder: atraviesa un árbol binario utilizando el recorrido de preorden
 * @tree: puntero al nodo raíz del árbol para atravesar
 * @func: puntero a una función para llamar a cada nodo.
 * El valor en el nodo debe pasarse como parámetro a esta función
 *
 * Devolución: nula
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}