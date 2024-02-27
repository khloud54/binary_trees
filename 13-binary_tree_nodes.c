#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a
 * binary tree.
 * A node with at least one child is considered a "node".
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes in the tree, or 0 if the tree is NULL.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		nodes = 1;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
