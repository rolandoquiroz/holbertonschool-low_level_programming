#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: full = 1 Not full = 0. If tree is NULL return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	size_t nodes_left = 0, nodes_right = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (tree->left)
		nodes_left = binary_tree_is_full(tree->left);
	if (tree->right)
		nodes_right = binary_tree_is_full(tree->right);

	return (nodes_left && nodes_right);
}
