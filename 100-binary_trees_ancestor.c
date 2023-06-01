#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);
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

	int depth_first = binary_tree_depth(first);
	int depth_second = binary_tree_depth(second);
	
	binary_tree_t *p = (binary_tree_t *)first;
	binary_tree_t *q = (binary_tree_t *)second;

 	while (depth_first > depth_second)
	{
		p = p->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		q = p->parent;
		depth_second--;
	}

	while (p != q)
	{
		if (p == NULL || q == NULL)
			return (NULL);
		p = p->parent;
		q = q->parent;
	}

	return ((binary_tree_t *)p);
}

/**
 * depth - depth of a node in a binary tree
 * @tree: node to measure length
 *
 * Return: depth of node, else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree->parent != NULL) ? 1 + binary_tree_depth(tree->parent) : 0);
}
