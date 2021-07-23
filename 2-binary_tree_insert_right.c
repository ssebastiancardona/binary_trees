#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node_2 - crea un nodo de árbol binario
 * @parent: parte del nodo a crear
 * @value: valor para almacenar en el nuevo nodo
 *
 * Retorno: puntero al nuevo nodo
 */

binary_tree_t *binary_tree_node_2(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	return (new_node);
}

/**
 * binary_tree_insert_right - inserta un nodo como hijo derecho de otro nodo
 * @parent: puntero al nodo para insertar el hijo derecho en
 * @value: valor para almacenar en el nuevo nodo
 *
 * Descripción: Si el padre ya tiene un hijo derecho, el nuevo nodo debe tomar su
 * lugar y el antiguo hijo derecho deben establecerse como hijo derecho del nuevo nodo
 *
 * Retorno: puntero al nodo creado, o NULL en caso de falla
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node_2(parent, value);
	if (right_child == NULL)
		return (NULL);
	right_child->right = parent->right;
	if (right_child->right != NULL)
		right_child->right->parent = right_child;
	parent->right = right_child;
	return (right_child);
}
