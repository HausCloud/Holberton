#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: root of binary tree to mesure
 * Return: the max depth of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftmax, rightmax;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL) /* Why?? */
		return (0);

	leftmax = binary_tree_height(tree->left);
	rightmax = binary_tree_height(tree->right);

	if (leftmax > rightmax)
		return (leftmax + 1);
	else
		return (rightmax + 1);

}
