#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - function that that measures the height of a binary tree
 * @tree: pointer to tree
 *
 *Return: height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	if (left_height >= right_height)
		return (left_height);
	return (right_height);
}

