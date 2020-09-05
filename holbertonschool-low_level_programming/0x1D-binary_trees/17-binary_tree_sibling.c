#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the other branch of the nodes patent node
 * @node: to find the sibling of
 * Return: pointer to sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
