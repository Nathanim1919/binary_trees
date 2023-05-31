#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in abinary tree
 * @tree: is apointer to the root node of the tree to count
 * the number of leaves
 * Return: the number of leaves
 * if tree is NULL, the function must return 0
 * A NULL pointer is not leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
