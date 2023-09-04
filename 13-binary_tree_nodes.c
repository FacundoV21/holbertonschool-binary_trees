#include "binary_trees.h"

/**
 * binary_tree_nodes - used to find the ammount of nodes with at least one
 * child on a binary tree
 * @tree: pointer to the root node of a tree
 * Return:  the amount of nodes with child nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c1, c2;

	if (!tree)
		return (0);

	c1 = binary_tree_nodes(tree->left);

	c2 = binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (c1 + c2);
	else
		return ((c1 + c2) + 1);
}
