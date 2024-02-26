#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree  node
 * @parent: a pointer to the parent node of the node to create
 * @value: The value to put in the new node
 * Description: This function creates a new node of a binary tree.
 *              The newly created node will have the given value, and
 *              its parengt pointer will point to the provided parent node.
 *              Both left and right chid pointers are initialized to NULL.
 *
 * Return: If successful, a pointer to the newly created node.
 *         Otherwise, return NULL.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_ptr;

	new_node_ptr = malloc(sizeof(binary_tree_t));
	if (new_node_ptr == NULL)
	{
		return (NULL);
	}

	new_node_ptr->n = value;
	new_node_ptr->parent = parent;
	new_node_ptr->left = NULL;
	new_node_ptr->right = NULL;
	return (new_node_ptr);
}
