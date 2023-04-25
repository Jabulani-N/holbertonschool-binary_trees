#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - judges binary tree node
 * @node : the node to be judged
 * Return: 1:root; else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!(node->parent))
		return (1);/*no parent: yes root*/
	return (0);/*had parent: notroot*/
}

