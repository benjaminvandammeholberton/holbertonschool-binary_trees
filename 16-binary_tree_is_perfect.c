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

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: the number of leaves in the tree, 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	right = binary_tree_leaves(tree->right);
	left = binary_tree_leaves(tree->left);

	return (left + right);
}


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
	if ((binary_tree_leaves(tree->left) == binary_tree_leaves(tree->right))
	    && (binary_tree_height(tree->left)
		== binary_tree_height(tree->right)))
		return (1);
	return (0);
}
