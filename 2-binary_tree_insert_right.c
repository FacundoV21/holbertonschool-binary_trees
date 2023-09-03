#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a binary tree node at the right of the
 * parent
 * @parent: parent node of the node to create
 * @value: int value to put into the node
 * Return: pointer to created node or NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	temp = parent;
	if (temp->right == NULL)
	{
		temp->right = new_node;
		new_node->parent = parent;
		new_node->n = value;
		new_node->right = NULL;
		new_node->left = NULL;
	}
	else
	{
		new_node->right = temp->right;
		temp->right = new_node;
		(new_node->right)->parent = new_node;
		new_node->n = value;
		new_node->parent = temp;
		new_node->left = NULL;
	}
	return (new_node);
}
