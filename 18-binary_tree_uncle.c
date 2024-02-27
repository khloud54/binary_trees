#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *ancestor = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	ancestor = parent->parent;


	return (ancestor->left == parent ? ancestor->right : ancestor->left);
}
