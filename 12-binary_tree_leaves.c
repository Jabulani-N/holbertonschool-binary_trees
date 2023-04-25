#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in tree
 * @tree : pointer
 * Return: Always 0 (Success)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		n++;
	else
	{
		n = binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right);
	}
	return (n);
}

