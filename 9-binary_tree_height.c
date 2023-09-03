#include "binary_trees.h"

/**
 * BT_height_recursive - used to find the height of a binary tree
 * @tree: pointer to the root node of a tree
 * Return:  the height of the tree
*/

size_t BT_height_recursive(const binary_tree_t *tree)
{
	size_t h1, h2;

	if (!tree)
		return (0);

	h1 = (BT_height_recursive(tree->left));
	h2 = (BT_height_recursive(tree->right));

	if (h1 > h2)
		return (1 + h1);
	else
		return (1 + h2);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (BT_height_recursive(tree) - 1);
}
