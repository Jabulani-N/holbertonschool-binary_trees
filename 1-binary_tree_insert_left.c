#include "binary_trees.h"
#include "0-binary_tree_node.c"

/**
 * binary_tree_insert_left - recieves a parent node
 * 	creates a new node
 * @parent: this will me the node's parent. it's ->left will be the new node
 * @value: the ->n of the newly created node
 * Return: newly created node
 */
/*
 *	additional notes
 * if parent already has a ->left:
 * old ->left will become newly created node->left
 * newly created node will become parent->left
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t newNode;

}
