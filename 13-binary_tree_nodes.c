#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child in
 * a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: the number of nodes with at least 1 child in the tree,
 * 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);
	if (!tree->right && !tree->left)
		return (0);
	right = binary_tree_nodes(tree->right);
	left = binary_tree_nodes(tree->left);
	return (right + left + 1);
}
