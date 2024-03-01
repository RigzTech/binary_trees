#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs an in-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * If tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Visit the root node */
	func(tree->n);

	/* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
