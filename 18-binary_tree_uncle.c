#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
<<<<<<< HEAD
	binary_tree_t *parent = NULL, *ancestor = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	ancestor = parent->parent;


	return (ancestor->left == parent ? ancestor->right : ancestor->left);
=======
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
>>>>>>> f64a262fefa4e20b5af51e145a7e3152b60ed6e7
}
