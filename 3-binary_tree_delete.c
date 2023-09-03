#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree node
 * @tree: pointer to the root node of the tree to delete
 * Return: pointer to created node or NULL
*/


void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;
	
	temp = tree;
	if (!tree)
		return;
	
	while (temp->left != NULL || temp->right != NULL)
	{
		if (temp->left != NULL)
		{
			if ((temp->left)->left == NULL && (temp->left)->right == NULL)
			{
				free (temp->left);
				temp->left = NULL;
			}

			else if ((temp->left)->left != NULL || (temp->left)->right != NULL)
				binary_tree_delete(temp->left);
		}

		if (temp->right != NULL)
		{
			if ((temp->right)->left == NULL && (temp->right)->right == NULL)
			{
				free (temp->right);
				temp->right = NULL;
			}
			else if ((temp->right)->left != NULL || (temp->right)->right != NULL)
				binary_tree_delete(temp->right);
		}
	}
	if (temp->left == NULL && temp->right == NULL && temp->parent == NULL)
	{
		free (temp);
	}
	
}
