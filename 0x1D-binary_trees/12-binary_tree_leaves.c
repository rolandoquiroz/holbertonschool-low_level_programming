#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to to count the number of leaves
 *
 * Return: Number of leaves, If tree is NULL return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0, leaves_right = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (tree->left)
		leaves_left = binary_tree_leaves(tree->left);
	if (tree->right)
		leaves_right = binary_tree_leaves(tree->right);

	return (leaves_left + leaves_right);
}
