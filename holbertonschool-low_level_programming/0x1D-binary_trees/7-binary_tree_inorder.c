#include "binary_trees.h"

/**
 * binary_tree_inorder - goes though tree and runs function inorder
 * @tree: root of binary tree
 * @func: function to aply to tree
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
