#include "binary_trees.h"

/**
 * binary_tree_leaves - used to find the ammount of leaves of a binary tree
 * @tree: pointer to the root node of a tree
 * Return:  the amount of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l1 = 0, l2 = 0;

	if (!tree)
		return (0);

	l1 = binary_tree_leaves(tree->left);

	l2 = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return ((l1 + l2) + 1);
	else
		return (l1 + l2);
}
