#include "binary_trees.h"
int height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((binary_tree_is_full(tree) == 1) && (height(tree->left) == height(tree->right)))
		return (1);
	return (0);
}

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return(1);
	if (tree->left == NULL || tree->right == NULL)
		return(0);
	if(binary_tree_is_full(tree->left) == 1 && binary_tree_is_full(tree->right) == 1)
		return(1);
	else
		return(0);
}

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
