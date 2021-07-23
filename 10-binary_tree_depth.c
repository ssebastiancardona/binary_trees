#include "binary_trees.h"

/**
 * binary_tree_depth - mide la profundidad de un nodo en un árbol binario
 * @node: puntero al nodo para medir la profundidad de
 *
 * Retorno: profundidad de un nodo en un árbol binario. Si el nodo es NULO, devuelve 0
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count = 0;

	if (node == NULL)
		return (count);
	while (node->parent != NULL)
	{
		count++;
		node = node->parent;
	}
	return (count);
}
