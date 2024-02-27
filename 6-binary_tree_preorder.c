#include  "binary_trees.h"

/**
 * binary_tree_preorder - Goes through binary tree using pre-order traversal.
 * pre-order traversal visits the current node, then the left subtree, and
 * finally the right subtree.
 * @tree: A pointer to the root node of the tree traverse.
 * @func: A pointer to a function to call for each node. The value in the node
 * is passed as a parameter to this function.
 * Return: Nothing.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
