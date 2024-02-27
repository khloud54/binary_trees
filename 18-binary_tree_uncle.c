#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);

	binary_tree_t *grandparent = node->parent->parent;

	/* Determine the uncle */
	if (grandparent->left && grandparent->right)
	{
		if (grandparent->left == node->parent)
			return (grandparent->right);
		else
			return (grandparent->left);
	}

	return (NULL);
}
