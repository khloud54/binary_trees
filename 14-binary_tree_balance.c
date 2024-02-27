#include "binary_trees.h"

/**
 * binary_tree_height_b - measures height of a binary tree for a balanced tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: The height of the tree.
*/
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height_b(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height_b(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the tree (difference in height between left
 * and right subsress).
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = tree->left ? (int)binary_tree_height_b(tree->left) + 1 : 0;
	right_height = tree->right ? (int)binary_tree_height_b(tree->right) + 1 : 0;

	return (left_height - right_height);
}
