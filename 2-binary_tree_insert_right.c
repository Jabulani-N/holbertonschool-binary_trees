#include "binary_trees.h"

/**
 * binary_tree_insert_right - recieves a parent node
 *	creates a new node
 * @parent: this will me the node's parent. it's ->right will be the new node
 * @value: the ->n of the newly created node
 * Return: newly created node
 */
/*
 *	additional notes
 * if parent already has a ->right:
 * old ->rightt will become newly created node->right
 * newly created node will become parent->rightt
 *
 * copied from ...insert_left.
 *	any instance of a "left" is an accident.
 *	all should be "right" instead.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	/*node created*/

	if (!parent)/*quit if parent is null*/
		return (NULL);
	newNode = binary_tree_node(parent, value);

	if (!(newNode)) /*if malloc within node creation failed*/
		return (NULL);

	if (parent->right)
	{
		newNode->right = parent->right; /*if parent->left = NULL, is still correct*/
		(newNode->right)->parent = newNode; /*very important*/
	}
	parent->right = newNode;
	return (newNode);
}
