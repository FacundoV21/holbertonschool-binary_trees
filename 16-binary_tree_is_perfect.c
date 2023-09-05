#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - used to check if a binary tree is perfect
 * @tree: pointer to the node of the tree to check
 * Return: 1 if its perfect else 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_size(tree->right) == binary_tree_size(tree->left))
		if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
			return (1);

	return (0);
}
