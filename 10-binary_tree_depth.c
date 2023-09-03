#include "binary_trees.h"

/**
 * BT_depth_recursive - used to find the depth of a binary tree
 * @tree: pointer to the root node of a tree
 * Return:  the depth of the tree
*/

size_t BT_depth_recursive(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((BT_depth_recursive(tree->parent)) + 1);
}

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: the depth of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (BT_depth_recursive(tree) - 1);
}
