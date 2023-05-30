#include "binary_trees.h"

/**
 * *binary_tree_insert_right - function that inserts a node as the left-child
 * @parent: s a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or
	if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	newNode->right = parent->right;
	if (newNode->right != NULL)
		newNode->right->parent = newNode;
	parent->right = newNode;
	return (newNode);
}
