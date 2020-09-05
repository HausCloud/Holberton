#include "binary_trees.h"

/**
 * help_function_full - checks to see if tree is full
 * @tree: root of binary tree
 * Return: (1) if tree is full (0) else
 */
int help_function_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	while (tree->left != NULL || tree->right != NULL)
		return (help_function_full(tree->left) &&
			help_function_full(tree->right));
	return (0);
}

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
 * binary_tree_is_perfect - determine if binary tree is a perfect tree
 * @tree: tree to check
 * Return: 1 if is a perfect tree, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int maxleft, maxright;

	if (tree == NULL)
		return (0);

	maxleft = help_function_height(tree->left);
	maxright = help_function_height(tree->right);

	if ((maxleft - maxright) != 0)
		return (0);

	if ((help_function_full(tree)) == 0)
		return (0);

	return (1);
}
