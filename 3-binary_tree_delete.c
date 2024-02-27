#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree using recursion.
 * It frees each node when both its left and right children are NULL.
 * @tree:
 * A pointer to the root node of the tree to delete.
 * Return: Nothing.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	free(tree);
}
