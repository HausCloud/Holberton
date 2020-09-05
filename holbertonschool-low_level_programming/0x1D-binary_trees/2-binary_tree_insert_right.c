#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node in the right child
 * @parent: pointer to node that will receive child
 * @value: value to be set
 * Return: the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right->parent = new_node;
	}
	else if (parent->right == NULL)
	{
		new_node->right = NULL;
		new_node->right = NULL;
		parent->right = new_node;
		new_node->parent = parent;
	}

	return (new_node);
}
