#include "binary_trees.h"
#include <stddef.h>

/**
 *binary_tree_depth-binary_tree_depth
 *@tree:tree
 *Return:0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}
	return (binary_tree_depth(tree->parent) + 1);
}

