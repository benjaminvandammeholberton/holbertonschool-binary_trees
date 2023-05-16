#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the binary tree, 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);

	return (left + right + 1);
}
