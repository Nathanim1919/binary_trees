#include "binary_trees.h"
/**
 * *binary_tree_node - function that creates a binary tree node
 * @parent: is apointer to the parent of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	
	if (!newNode)
		return NULL;

	newNode->n = data;
	newNode->parent = parent;
	newNode->left = newNode->right = NULL;
	
	return (newNode);
}
