#include "binary_trees.h"

/**
 * binary_tree_is_heap - checks if a binary tree
 * is valid Max Binary Heap
 *
 * @tree: pointer to tree's node
 * Return: 1 if the tree is a max heap, 0 otherwise
*/
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->left && tree->left->n > tree->n)
		return (0);

	if (tree->right && tree->right->n > tree->n)
		return (0);

	if (!binary_tree_is_heap(tree->left) || !binary_tree_is_heap(tree->right))
		return (0);

	return (1);
}
