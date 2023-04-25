#include"binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary is full
 * @tree : pointerto the root node
 * Return: Always 0 (Success)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));

	return (0);
}

