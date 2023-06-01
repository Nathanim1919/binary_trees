#include "binary_trees.h"


/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: the first binary binary_tree
 * @second: the second binary_tree
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return NULL;

	binary_tree_t *p = (binary_tree_t *)first;
	binary_tree_t *q = (binary_tree_t *)second;

	while (p != q)
	{
		p = p->parent ? p->parent : (binary_tree_t *)second;
		q = q->parent ? q->parent : (binary_tree_t *)first;
	}

	return (p);
}
