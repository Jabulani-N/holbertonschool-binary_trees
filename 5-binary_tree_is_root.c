#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - judges binary tree node
 * @node : the node to be judged
 * Return: 1:leaf; else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!(node->left) && !(node->right))
		return (1);/*no kids: yes leaf*/
	return (0);/*had kids: not leaf*/
}

