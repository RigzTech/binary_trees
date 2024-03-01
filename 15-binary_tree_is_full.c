#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	int left_full = binary_tree_is_full(tree->left);
	int right_full = binary_tree_is_full(tree->right);

	if (left_full == 0 || right_full == 0)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (1);
	else
		return (0);
}
