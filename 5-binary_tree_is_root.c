#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root
 * @node: node to analize
 * Return: 1 if node is root otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	const binary_tree_t *temp;

	if (!node)
		return (0);
	temp = node;

	if (temp->parent == NULL)
		return (1);

	return (0);
}
