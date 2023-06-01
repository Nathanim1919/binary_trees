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
	binary_tree_t *parent1 = first->parent;
	binary_tree_t *parent2 = second->parent;

	if (first == NULL || second == NULL)
		return NULL;
	
	if (first == second)
		return (binary_tree_t *)first;
	
	if (first == parent2 || parent1 == NULL || (!parent1->parent && parent2))
		return binary_trees_ancestor(first, parent2);

	if (parent1 == second || parent2 == NULL || (!parent2->parent && parent1))
		return binary_trees_ancestor(parent1, second);
    
	return (binary_trees_ancestor(parent1, parent2));
}
