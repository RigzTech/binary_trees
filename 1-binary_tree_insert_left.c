#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*checking if parent == NULL */
	if (parent == NULL)
		return (NULL);

	/* Creating a new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/*Make the parent a left child of the new node if it already exists */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/* set the new node as the left child of the parent */
	parent->left = new_node;
	return (new_node);
}
