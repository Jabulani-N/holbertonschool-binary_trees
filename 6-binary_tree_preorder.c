#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - function that goes through a binary tree
 *using pre-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 *
 * Return: don't
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)/*quit if anything went wrong*/
		return;

	func(tree->n); /*func is provided*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
