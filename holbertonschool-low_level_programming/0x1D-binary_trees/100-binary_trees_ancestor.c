#include "binary_trees.h"

/**
 * binary_trees_ancestor - find lowest common ancestor between two nodes
 * @first: first child
 * @second: second child
 * Return: return lowest common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *ptr;
	int len1 = 0, len2 = 0;

	if (first == NULL || second == NULL)
		return (NULL);
	else if (first->parent == second)
		return (first->parent);
	else if (second->parent == first)
		return (second->parent);
	ptr = first;
	while (ptr->parent != NULL)
		len1++, ptr = ptr->parent;
	ptr = second;
	while (ptr->parent != NULL)
		len2++, ptr = ptr->parent;

	if (len1 > len2)
		while (len1 != len2)
			len1--, first = first->parent;
	else if (len2 > len1)
		while (len1 != len2)
			len2--, second = second->parent;

	for (; first->parent != NULL && second->parent != NULL;
	     first = first->parent, second = second->parent)
		if (first->parent == second->parent)
			return (first->parent);

	return (NULL);
}
