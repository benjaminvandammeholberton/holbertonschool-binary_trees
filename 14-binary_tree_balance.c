#include "binary_trees.h"

int height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measure balance of a tree
 * @tree: pointer
 * Return: balance count difference
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = height(tree->left);
	if (tree->right)
		right = height(tree->right);
	return (left - right);
}
/**
 * height - Measures height of binary tree
 * @tree: pointer to root
 *
 * Return: int height
 */
int height(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);
	right = height(tree->right);
	left = height(tree->left);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
