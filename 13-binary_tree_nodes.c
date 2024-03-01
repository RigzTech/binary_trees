#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes
 * with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Base case: if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Count the current node if it has at least one child */
	size_t count = (tree->left != NULL || tree->right != NULL) ? 1 : 0;

	/* Recursively count the nodes in the left and right subtrees */
	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	/* Return the sum of the counts */
	return (count + left_nodes + right_nodes);
}
