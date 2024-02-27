#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node:  a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibiling node, or NULL if the node has
 * no sibiling or is NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	/* check if the node has a sibling */
	if (node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}

	/* Return the sibling of the node */
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
