#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to new created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child = NULL;

	if (parent == NULL)
		return (NULL);

	/* left_child = binary_tree_node(parent, value)*/

	left_child = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);

	left_child->n = value;
	left_child->parent = parent;
	left_child->left = NULL;
	left_child->right = NULL;

	if (parent->left)
	{
		/* old left-child set as the left-child of the new node*/
		left_child->left = parent->left;
		/* new node take old left-child place*/
		parent->left->parent = left_child;
	}
	/* Inserts left_child as the left-child of original parent node */
	parent->left = left_child;

	return (left_child);
}
