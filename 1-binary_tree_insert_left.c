#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the left child of a
 * given node.
 * If the parent already has a left child, the new node becomes the left child,
 * and the previous left child becomes the left child of the new node.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the newly inserted node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *inserted_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	inserted_node = binary_tree_node(parent, value);
	if (inserted_node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		inserted_node->left = parent->left;
		parent->left->parent = inserted_node;
	}

	parent->left = inserted_node;
	return (inserted_node);
}
