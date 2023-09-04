#include "binary_trees.h"

/**
 * binary_tree_sibling - used to check find a sibiling node
 * @node: pointer to the node of the tree to check
 * Return: sibiling node pointer
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left->n != node->n)
			return (node->parent->left);

		if (node->parent->right->n != node->n)
			return (node->parent->right);
	}
	return (NULL);
}
