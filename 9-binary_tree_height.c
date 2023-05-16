#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the binary tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);
	if (!tree->right && !tree->left)
		return (0);
	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);
	if (right > left)
		return (right + 1);
	else
		return (left + 1);
}
