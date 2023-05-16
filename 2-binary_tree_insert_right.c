#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the new node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;

	if (parent->right == NULL)
	{
		parent->right = new_node;
		return (parent);
	}
	new_node->right = parent->right;
	parent->right = new_node;
	return (new_node);
}
