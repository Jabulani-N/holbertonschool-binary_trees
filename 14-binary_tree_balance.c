#include "binary_trees.h"
#include <stdlib.h>

/**
 * tree_height - function that mesure the height of the tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height or 0
 */
int tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return (left > right ? left + 1 : right + 1);
}


/**
 * binary_tree_balance - function that measures the balance
 *factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: count value or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}

