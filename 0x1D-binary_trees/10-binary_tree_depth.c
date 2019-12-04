#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a binary tree node
 * @tree: Pointer to the node to measure the depth
 *
 * Return: If tree is NULL return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (depth);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
