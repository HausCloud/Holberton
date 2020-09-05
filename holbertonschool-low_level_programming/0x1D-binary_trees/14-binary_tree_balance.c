#include "binary_trees.h"

/**
 * help_function_height - finds the height of a binary tree
 * @tree: root of binary tree to mesure
 * Return: the height of the tree
 */
int help_function_height(binary_tree_t *tree)
{
	int leftmax, rightmax;

	if (tree == NULL)
		return (0);
	leftmax = help_function_height(tree->left);
	rightmax = help_function_height(tree->right);

	if (leftmax > rightmax)
		return (leftmax + 1);
	else
		return (rightmax + 1);
}

/**
 * binary_tree_balance - measure balance factor of binary tree
 * @tree: the tree to be balanced
 * Return: return difference in balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int maxleft, maxright;

	if (tree == NULL)
		return (0);

	maxleft = help_function_height(tree->left);
	maxright = help_function_height(tree->right);

	return (maxleft - maxright);
}
