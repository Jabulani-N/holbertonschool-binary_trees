#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - function that counts the nodes with
 *at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: count value or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		count += (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)
		+ 1);

	return (count);
}

