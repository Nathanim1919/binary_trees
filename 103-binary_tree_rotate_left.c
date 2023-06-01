#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs a left-rotation
 *			on a binary tree
 *
 * @tree: root node of the tree
 * Return:  pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL)
		return (tree);

	binary_tree_t *new_root = tree->right;

	tree->right = new_root->left;
	new_root->left = tree;
	return (new_root);
}
