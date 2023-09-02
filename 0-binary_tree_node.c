#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node of the node to create
 * @value: int value to put into the node
 * Return: pointer to created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (!parent)
		new_node->parent = NULL;
	else
		new_node->parent = parent;

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
