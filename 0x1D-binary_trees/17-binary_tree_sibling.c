#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node. No sibling then return NULL
 *         If node is NULL or the parent is NULL, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if ((node == NULL) || (node->parent == NULL))
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);
	if (node == node->parent->left)
		return (node->parent->right);
	return (NULL);
}
