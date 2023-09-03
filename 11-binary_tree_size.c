#include "binary_trees.h"

/**
 * binary_tree_size - used to find the size of a binary tree
 * @tree: pointer to the root node of a tree
 * Return:  the size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s1, s2;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		s1 = binary_tree_size(tree->left);

	if (tree->right != NULL)
		s2 = binary_tree_size(tree->right);

	return ((s1 + s2) + 1);
}
