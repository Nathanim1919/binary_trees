#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: is a pointer ,to the node to check
 * Return: 1 is node is a leaf, otherwise 0
 * if node is NULL, return 0
 */

binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	if (node == NULL)
		return (0);
}
