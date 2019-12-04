#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		size_left = binary_tree_size(tree->left);
	if (tree->right)
		size_right = binary_tree_size(tree->right);

	return (size_left + size_right + 1);
}
