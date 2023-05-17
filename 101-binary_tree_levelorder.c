#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree
 * using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *        The value in the node is passed as a parameter to this function.
 *
 * Description: In level-order traversal, the current node is visited first,
 * followed by its left subtree, and then its right subtree.
 *
 * If tree or func is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
	{
		func(tree->left->n);
		func(tree->right->n);
		binary_tree_levelorder(tree->left->left, func);
		binary_tree_levelorder(tree->left->right, func);
	}

	if (tree->right != NULL)
	{
		binary_tree_levelorder(tree->right->left, func);
		binary_tree_levelorder(tree->right->right, func);
	}
}
