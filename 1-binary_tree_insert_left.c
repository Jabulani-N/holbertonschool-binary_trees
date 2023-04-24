#include "binary_trees.h"

/**
 * binary_tree_insert_left - recieves a parent node
 *	creates a new node
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
	binary_tree_t *newNode;
	/*node created*/

	if (!parent)/*quit if parent is null*/
		return (NULL);
	newNode = binary_tree_node(parent, value);

	if (!(newNode)) /*if malloc within node creation failed*/
		return (NULL);

	if (parent->left)
	{
		newNode->left = parent->left; /*if parent->left = NULL, is still correct*/
		(newNode->left)->parent = newNode; /*very important*/
	}
	parent->left = newNode;
	return (newNode);
}
