#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * If tree is NULL, return 0
 *
 * Return: The depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Traverse up the tree to the root, incrementing depth at each step */
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
