#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*memory allocation for the new node */
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		/*Allocation failed, return NULL */
		return (NULL);
	}

	/*Innitializing the new node's fields */
	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	/*Return a pointer to the new node */
	return (new_node);
}
