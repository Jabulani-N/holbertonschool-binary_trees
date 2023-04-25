#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node : pointer of the node
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);

	else
	return (node->parent->parent->right);
}


