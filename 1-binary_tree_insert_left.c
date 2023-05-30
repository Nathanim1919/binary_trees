#include "binary_trees.h"

/**
 * *binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent: s a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = newNode->right = NULL:
	
	if (parent->left == NULL)	
		parent->left = newNode;
	else
	{
		newNode->left = parent->left;
		parent->left = newNode;
	}

	return (newNode);
}
