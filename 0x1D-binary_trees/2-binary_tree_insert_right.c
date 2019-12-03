#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to new created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child = NULL;

	if (parent == NULL)
		return (NULL);

	/* right_child = binary_tree_node(parent, value); */

	right_child = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
		return (NULL);

	right_child->n = value;
	right_child->parent = parent;
	right_child->left = NULL;
	right_child->right = NULL;

	if (parent->right)
	{
		/**
		 * old right-child (parent->right) set as the right-child
		 * (right) of the new node (right_child)
		 */
		right_child->right = parent->right;
		/* new node (right_child) take old right-child place */
		parent->right->parent = right_child;
	}
	/**
	 * Inserts right_child as the right-child (parent->right) of
	 * original parent node
	 */
	parent->right = right_child;

	return (right_child);
}
