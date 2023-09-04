#include "binary_trees.h"

/**
 * binary_tree_uncle - used to check find a uncle node
 * @node: pointer to the node of the tree to check
 * Return: uncle node pointer
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent->parent->left->n != node->parent->n)
			return (node->parent->parent->left);

		if (node->parent->parent->right->n != node->parent->n)
			return (node->parent->parent->right);
	}
	return (NULL);
}
