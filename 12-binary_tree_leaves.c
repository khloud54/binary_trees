#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * A leaf is a node with no children.
 *
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: The number of leaves in the tree, ot 0 if the tree is NULL.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
