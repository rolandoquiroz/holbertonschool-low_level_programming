#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes or, if tree is NULL return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t nodes_left = 0, nodes_right = 0;

	if (tree == NULL || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);

	if (tree->left)
		nodes_left = binary_tree_nodes(tree->left);
	if (tree->right)
		nodes_right = binary_tree_nodes(tree->right);

	return (nodes_left + nodes_right + 1);
}
