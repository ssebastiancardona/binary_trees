#include "binary_trees.h"

/**
 * binary_tree_postorder: atraviesa un árbol binario mediante el recorrido postorder
 * @tree: puntero al nodo raíz del árbol para atravesar
 * @func: puntero a una función para llamar a cada nodo.
 * El valor en el nodo debe pasarse como parámetro a esta función
 *
 * Devolución: nula
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
