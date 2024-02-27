#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: Pointer to the lowest common ancestor node, or NULL if no ancestor
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *f = first, *s = second;

	while (f != s)
	{
		f = (f ? f->parent : second);
		s = (s ? s->parent : first);
	}

	return ((binary_tree_t *)f);
}
