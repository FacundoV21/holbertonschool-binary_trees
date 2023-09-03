#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf (las not NULL node
 * in its path)
 * @node: node to analize
 * Return: 1 if node is leaf otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	binary_tree_t *temp;

	if (!node)
		return (0);
	temp = node;

	if (temp->left == NULL && temp->right == NULL)
		return (1);

	return (0);
}
