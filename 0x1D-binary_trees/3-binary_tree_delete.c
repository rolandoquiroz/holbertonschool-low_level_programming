#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
