#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Base case: if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the size of the left and right subtrees */
	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	/**
	 *  Return the sum of the sizes of the left and right subtrees,
	 *  plus one for the current node
	 */
	return (left_size + right_size + 1);
}
