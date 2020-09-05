#include "binary_trees.h"

/**
 * binary_tree_nodes - sum up all nodes that have at least one child
 * @tree: tree to be searched
 * Return: sum of nodes with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (binary_tree_nodes(tree->left) + 1 +
			binary_tree_nodes(tree->right));
}
