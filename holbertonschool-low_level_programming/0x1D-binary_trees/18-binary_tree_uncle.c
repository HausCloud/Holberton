#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the nodes' parents' sibling node
 * @node: node to find the uncle of
 * Return: pointer to parents sibling node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left->left == node ||
	    node->parent->parent->left->right == node)
		return (node->parent->parent->right);
	else if (node->parent->parent->right->right == node ||
		 node->parent->parent->right->left == node)
		return (node->parent->parent->left);
	return (NULL);
}
