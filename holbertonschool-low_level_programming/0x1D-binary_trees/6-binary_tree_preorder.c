#include "binary_trees.h"

/**
 * binary_tree_preorder - serch though tree with pre-order traversal
 * @tree: tree to be traversed
 * @func: function call for node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
