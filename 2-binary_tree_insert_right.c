#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of
 * a given node. If the parent already has a right child, the new node
 * takes its place, and the existing right chid becomes the right child of the
 * new node.
 * @parent: A pointer to the parent node to insert the right child
 * of the new node.
 * @value: The value to store in the new node.
 * Return: Apointer to the newly inserted node, or NULL on failure.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return  (NULL);

	new_right = binary_tree_node(parent, value);
	if (new_right == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right->parent = new_right;
	}
	parent->right = new_right;

	return (new_right);
}
