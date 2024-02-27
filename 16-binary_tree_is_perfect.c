#include "binary_trees.h"

/**
 * count_nodes - Counts the umber of nodes in a binary tree.
 *
 * @tree: A pointer to the root node of the tree.
 * Return: The number of nodes in the tree.
*/
size_t count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * tree_is_perfect - Checks if a binary tree is perfect.
 * A perfect binary tree is one where all internal nodes have exactly
 * two children and all leaves are at the same levell.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
*/
int tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_nodes = 0, right_nodes = 0;


	if (tree == NULL)
		return (1);

	left_nodes = count_nodes(tree->left);
	right_nodes = count_nodes(tree->right);

	if (left_nodes != right_nodes)
		return (0);

	return (tree_is_perfect(tree->left) && tree_is_perfect(tree->right));
}

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * A perfect binary tree is one where all internal nodes have exactly
 * two children and all leaves are at the same level.
 * @tree: a pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_is_perfect(tree));
}
